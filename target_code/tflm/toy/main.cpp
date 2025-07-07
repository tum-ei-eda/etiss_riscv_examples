#include <cmath>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "tensorflow/lite/micro/tflite_bridge/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "toy_data/toy_input_data.h"
#include "toy_data/toy_model_data.h"
#include "toy_data/toy_model_settings.h"
#include "toy_data/toy_output_data_ref.h"

#define CHECK 0
#ifndef CHECK
#define CHECK 1
#endif

#define MAX_RUNS 1
#ifndef MAX_RUNS
#define MAX_RUNS 1000
#endif

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

constexpr size_t tensor_arena_size = 256 * 1024;
alignas(16) uint8_t tensor_arena[tensor_arena_size];

int run_test()
{
    tflite::MicroErrorReporter micro_error_reporter;
    tflite::ErrorReporter *error_reporter = &micro_error_reporter;

    const tflite::Model *model = tflite::GetModel(toy_model_data);

    static tflite::MicroMutableOpResolver<1> resolver;
    resolver.AddFullyConnected();

    tflite::MicroInterpreter interpreter(model, resolver, tensor_arena, tensor_arena_size);

    if (interpreter.AllocateTensors() != kTfLiteOk)
    {
        TF_LITE_REPORT_ERROR(error_reporter, "ERROR: In AllocateTensors().");
        return -1;
    }

    for (size_t i = 0; i < MIN(toy_data_sample_cnt, MAX_RUNS); i++)
    {
        memcpy(interpreter.input(0)->data.int8, (int8_t *)toy_input_data[i], toy_input_data_len[i]);

        if (interpreter.Invoke() != kTfLiteOk)
        {
            TF_LITE_REPORT_ERROR(error_reporter, "ERROR: In Invoke().");
            return -1;
        }

#if CHECK
        uint32_t sum = 0;
        for (size_t j = 0; j < toy_input_data_len[i]; j++)
        {
            sum += pow((int8_t)toy_input_data[i][j] - interpreter.output(0)->data.int8[j], 2);
        }
        sum /= toy_input_data_len[i];

        uint32_t diff = abs(sum - toy_output_data_ref[i]);
        if (diff > 1)
        {
            printf("ERROR: at #%d, sum %d ref %d diff %d \n", i, sum, toy_output_data_ref[i], diff);
            return -1;
        }
        else
        {
            printf("Sample #%d pass, sum %d ref %d diff %d \n", i, sum, toy_output_data_ref[i], diff);
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
