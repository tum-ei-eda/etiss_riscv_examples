// tvm target: c -keys=cpu -constants-byte-alignment=16 -mcpu=generic-rv32 -model=etiss-rv32gc -workspace-byte-alignment=16
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_0(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_1(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_2(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_3(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_4(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_5(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_6(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_7(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_8(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_9(int8_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_10(int8_t*, int8_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_11(int8_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* constant_27_let = (&(global_const_workspace_0_var[29184]));
  void* constant_11_let = (&(global_const_workspace_0_var[32768]));
  void* constant_23_let = (&(global_const_workspace_0_var[29952]));
  void* constant_22_let = (&(global_const_workspace_0_var[30208]));
  void* constant_34_let = (&(global_const_workspace_0_var[27392]));
  void* constant_47_let = (&(global_const_workspace_0_var[24320]));
  void* constant_52_let = (&(global_const_workspace_0_var[23040]));
  void* constant_28_let = (&(global_const_workspace_0_var[28928]));
  void* constant_3_let = (&(global_const_workspace_0_var[28416]));
  void* constant_38_let = (&(global_const_workspace_0_var[26624]));
  void* constant_25_let = (&(global_const_workspace_0_var[29696]));
  void* constant_43_let = (&(global_const_workspace_0_var[25344]));
  void* constant_21_let = (&(global_const_workspace_0_var[30464]));
  void* constant_18_let = (&(global_const_workspace_0_var[21440]));
  void* constant_5_let = (&(global_const_workspace_0_var[23808]));
  void* constant_17_let = (&(global_const_workspace_0_var[31488]));
  void* constant_48_let = (&(global_const_workspace_0_var[0]));
  void* constant_20_let = (&(global_const_workspace_0_var[30720]));
  void* constant_15_let = (&(global_const_workspace_0_var[32000]));
  void* constant_19_let = (&(global_const_workspace_0_var[31232]));
  void* constant_35_let = (&(global_const_workspace_0_var[27136]));
  void* constant_36_let = (&(global_const_workspace_0_var[4096]));
  void* constant_37_let = (&(global_const_workspace_0_var[26880]));
  void* constant_16_let = (&(global_const_workspace_0_var[31744]));
  void* constant_8_let = (&(global_const_workspace_0_var[22272]));
  void* constant_14_let = (&(global_const_workspace_0_var[32256]));
  void* constant_54_let = (&(global_const_workspace_0_var[18944]));
  void* constant_13_let = (&(global_const_workspace_0_var[32512]));
  void* constant_0_let = (&(global_const_workspace_0_var[16384]));
  void* constant_26_let = (&(global_const_workspace_0_var[29440]));
  void* constant_1_let = (&(global_const_workspace_0_var[33280]));
  void* constant_4_let = (&(global_const_workspace_0_var[26112]));
  void* constant_53_let = (&(global_const_workspace_0_var[22784]));
  void* constant_55_let = (&(global_const_workspace_0_var[33536]));
  void* constant_24_let = (&(global_const_workspace_0_var[8192]));
  void* constant_6_let = (&(global_const_workspace_0_var[19712]));
  void* constant_7_let = (&(global_const_workspace_0_var[22528]));
  void* constant_12_let = (&(global_const_workspace_0_var[12288]));
  void* constant_2_let = (&(global_const_workspace_0_var[30976]));
  void* constant_9_let = (&(global_const_workspace_0_var[22016]));
  void* constant_10_let = (&(global_const_workspace_0_var[33024]));
  void* constant_29_let = (&(global_const_workspace_0_var[28672]));
  void* constant_30_let = (&(global_const_workspace_0_var[20864]));
  void* constant_31_let = (&(global_const_workspace_0_var[28160]));
  void* constant_32_let = (&(global_const_workspace_0_var[27904]));
  void* constant_33_let = (&(global_const_workspace_0_var[27648]));
  void* constant_39_let = (&(global_const_workspace_0_var[26368]));
  void* constant_50_let = (&(global_const_workspace_0_var[23552]));
  void* constant_40_let = (&(global_const_workspace_0_var[25856]));
  void* constant_42_let = (&(global_const_workspace_0_var[20288]));
  void* constant_41_let = (&(global_const_workspace_0_var[25600]));
  void* constant_44_let = (&(global_const_workspace_0_var[25088]));
  void* constant_46_let = (&(global_const_workspace_0_var[24576]));
  void* constant_45_let = (&(global_const_workspace_0_var[24832]));
  void* constant_49_let = (&(global_const_workspace_0_var[24064]));
  void* constant_51_let = (&(global_const_workspace_0_var[23296]));
  void* sid_56_let = (&(global_workspace_1_var[8000]));
  void* sid_35_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[8000]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[8000]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[8000]));
  void* sid_64_let = (&(global_workspace_1_var[8000]));
  void* sid_67_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_cmsis_nn_main_0(input_1_buffer_var, constant_0_let, constant_1_let, constant_3_let, constant_5_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_1(sid_7_let, constant_6_let, constant_7_let, constant_9_let, constant_11_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_2(sid_14_let, constant_12_let, constant_13_let, constant_15_let, constant_17_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_3(sid_21_let, constant_18_let, constant_19_let, constant_21_let, constant_23_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_4(sid_28_let, constant_24_let, constant_25_let, constant_27_let, constant_29_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_5(sid_35_let, constant_30_let, constant_31_let, constant_33_let, constant_35_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_6(sid_42_let, constant_36_let, constant_37_let, constant_39_let, constant_41_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_7(sid_49_let, constant_42_let, constant_43_let, constant_45_let, constant_47_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_8(sid_56_let, constant_48_let, constant_49_let, constant_51_let, constant_53_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_9(sid_63_let, sid_64_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_10(sid_64_let, constant_54_let, constant_55_let, sid_67_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_11(sid_67_let, Identity_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

