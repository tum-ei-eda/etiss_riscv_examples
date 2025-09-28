#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "aww_data/aww_input_data.h"
#include "aww_data/aww_model_data.h"
#include "aww_data/aww_model_settings.h"
#include "aww_data/aww_output_data_ref.h"
#include "tensorflow/lite/micro/tflite_bridge/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/schema/schema_generated.h"

#ifndef CHECK
#define CHECK 1
#endif

#ifndef MAX_RUNS
#define MAX_RUNS aww_data_sample_cnt
#endif

#ifndef MIN_RUNS
#define MIN_RUNS 1
#endif

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) < (Y)) ? (Y) : (X))


constexpr size_t tensor_arena_size = 256 * 1024;
alignas(16) uint8_t tensor_arena[tensor_arena_size];

//commit before array.h added - 6f2828619641503942f2bd69ddee006ff7823130

int run_test()
{
    tflite::MicroErrorReporter micro_error_reporter;
    tflite::ErrorReporter *error_reporter = &micro_error_reporter;

    const tflite::Model *model = tflite::GetModel(aww_model_data);

    static tflite::MicroMutableOpResolver<6> resolver;
    resolver.AddFullyConnected();
    resolver.AddConv2D();
    resolver.AddDepthwiseConv2D();
    resolver.AddAveragePool2D();
    resolver.AddReshape();
    resolver.AddSoftmax();

    tflite::MicroInterpreter interpreter(model, resolver, tensor_arena, tensor_arena_size);

    if (interpreter.AllocateTensors() != kTfLiteOk)
    {
        TF_LITE_REPORT_ERROR(error_reporter, "ERROR: In AllocateTensors().");
        return -1;
    }

    for (size_t i = 0; i < MAX(MIN(aww_data_sample_cnt, MAX_RUNS), MIN_RUNS); i++)
    {
        memcpy(interpreter.input(0)->data.int8, (int8_t *)aww_input_data[i % aww_data_sample_cnt], aww_input_data_len[i % aww_data_sample_cnt]);

        if (interpreter.Invoke() != kTfLiteOk)
        {
            TF_LITE_REPORT_ERROR(error_reporter, "ERROR: In Invoke().");
            return -1;
        }

#if CHECK
        int8_t top_index = 0;
        for (size_t j = 0; j < aww_model_label_cnt; j++)
        {
            if (interpreter.output(0)->data.int8[j] > interpreter.output(0)->data.int8[top_index])
            {
                top_index = j;
            }
        }

        if (top_index != aww_output_data_ref[i % aww_data_sample_cnt])
        {
            printf("ERROR: at #%d, top_index %d aww_output_data_ref %d \n", i, top_index, aww_output_data_ref[i % aww_data_sample_cnt]);
            return -1;
        }
        else
        {
            printf("Sample #%d pass, top_index %d matches ref %d \n", i, top_index, aww_output_data_ref[i % aww_data_sample_cnt]);
        }
#endif
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int ret = run_test();
    if (ret != 0)
    {
        printf("Test Failed!\n");
        // Make sure RISC-V simulators detect a failed test
#if defined(__riscv) || defined(__riscv__)
        // __asm__ volatile("unimp");
#endif
    }
    else
    {
#if CHECK
        printf("Test Success!\n");
#endif
    }

    return ret;
}
