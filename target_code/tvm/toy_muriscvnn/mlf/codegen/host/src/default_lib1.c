// tvm target: c -keys=cpu -constants-byte-alignment=4 -workspace-byte-alignment=4
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_0(int8_t* sid_1_let, int8_t* constant_0_let, int32_t* constant_1_let, int8_t* sid_4_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_1(int8_t* sid_4_let, int8_t* constant_2_let, int32_t* constant_3_let, int8_t* sid_7_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_2(int8_t* sid_7_let, int8_t* constant_4_let, int32_t* constant_5_let, int8_t* sid_10_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_3(int8_t* sid_10_let, int8_t* constant_6_let, int32_t* constant_7_let, int8_t* sid_13_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_4(int8_t* sid_13_let, int8_t* constant_8_let, int32_t* constant_9_let, int8_t* sid_16_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_5(int8_t* sid_16_let, int8_t* constant_10_let, int32_t* constant_11_let, int8_t* sid_19_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_6(int8_t* sid_19_let, int8_t* constant_12_let, int32_t* constant_13_let, int8_t* sid_22_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_7(int8_t* sid_22_let, int8_t* constant_14_let, int32_t* constant_15_let, int8_t* sid_25_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_8(int8_t* sid_25_let, int8_t* constant_16_let, int32_t* constant_17_let, int8_t* sid_28_let, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_9(int8_t* sid_28_let, int8_t* constant_18_let, int32_t* constant_19_let, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape(int8_t* p0, int8_t* T_reshape, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 40; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_reshape[cse_var_1] = p0[cse_var_1];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* constant_11_let = (&(global_const_workspace_0_var[269824]));
  void* constant_10_let = (&(global_const_workspace_0_var[265728]));
  void* constant_9_let = (&(global_const_workspace_0_var[270848]));
  void* constant_8_let = (&(global_const_workspace_0_var[264704]));
  void* constant_7_let = (&(global_const_workspace_0_var[266752]));
  void* constant_6_let = (&(global_const_workspace_0_var[163840]));
  void* constant_4_let = (&(global_const_workspace_0_var[180224]));
  void* constant_5_let = (&(global_const_workspace_0_var[267264]));
  void* constant_3_let = (&(global_const_workspace_0_var[267776]));
  void* constant_12_let = (&(global_const_workspace_0_var[245760]));
  void* constant_2_let = (&(global_const_workspace_0_var[196608]));
  void* constant_16_let = (&(global_const_workspace_0_var[212992]));
  void* constant_1_let = (&(global_const_workspace_0_var[270336]));
  void* constant_0_let = (&(global_const_workspace_0_var[81920]));
  void* constant_13_let = (&(global_const_workspace_0_var[269312]));
  void* constant_17_let = (&(global_const_workspace_0_var[268288]));
  void* constant_14_let = (&(global_const_workspace_0_var[229376]));
  void* constant_15_let = (&(global_const_workspace_0_var[268800]));
  void* constant_19_let = (&(global_const_workspace_0_var[262144]));
  void* constant_18_let = (&(global_const_workspace_0_var[0]));
  void* sid_25_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[128]));
  void* sid_10_let = (&(global_workspace_1_var[128]));
  void* sid_4_let = (&(global_workspace_1_var[640]));
  void* sid_16_let = (&(global_workspace_1_var[128]));
  void* sid_28_let = (&(global_workspace_1_var[128]));
  if (tvmgen_default_fused_reshape(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_0(sid_1_let, constant_0_let, constant_1_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_1(sid_4_let, constant_2_let, constant_3_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_2(sid_7_let, constant_4_let, constant_5_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_3(sid_10_let, constant_6_let, constant_7_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_4(sid_13_let, constant_8_let, constant_9_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_5(sid_16_let, constant_10_let, constant_11_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_6(sid_19_let, constant_12_let, constant_13_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_7(sid_22_let, constant_14_let, constant_15_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_8(sid_25_let, constant_16_let, constant_17_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_9(sid_28_let, constant_18_let, constant_19_let, Identity_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

