// tvm target: cmsis-nn 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlpack/dlpack.h>
#include <arm_nnfunctions.h>
#include <arm_nn_types.h>
#include <arm_nn_math_types.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_0(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_1(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_2(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_3(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_4(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_5(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_6(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_7(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_8(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_9(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_0(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {-89, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1638001653, -8};
  cmsis_nn_dims input_dims = {1,1,1,640};
  cmsis_nn_dims filter_dims = {640,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_1(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1442659874, -5};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_2(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1185020362, -2};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_3(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1439819933, -4};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_4(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1085889771, -6};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,8};
  cmsis_nn_dims bias_dims = {1,1,1,8};
  cmsis_nn_dims output_dims = {1,1,1,8};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_5(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1442237646, -5};
  cmsis_nn_dims input_dims = {1,1,1,8};
  cmsis_nn_dims filter_dims = {8,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_6(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1315670694, -5};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_7(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1994356843, -6};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_8(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, -128, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1105921547, -6};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,128};
  cmsis_nn_dims bias_dims = {1,1,1,128};
  cmsis_nn_dims output_dims = {1,1,1,128};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_9(int8_t* input_, int8_t* filter_, int32_t* bias_, int8_t* output_, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  cmsis_nn_context context= {NULL,0};
  cmsis_nn_activation activation = {-128,127};
  cmsis_nn_fc_params fc_params = {128, 0, 96, activation};
  cmsis_nn_per_tensor_quant_params quant_params = {1462485078, -9};
  cmsis_nn_dims input_dims = {1,1,1,128};
  cmsis_nn_dims filter_dims = {128,1,1,640};
  cmsis_nn_dims bias_dims = {1,1,1,640};
  cmsis_nn_dims output_dims = {1,1,1,640};
  arm_cmsis_nn_status status = arm_fully_connected_s8(&context, &fc_params, &quant_params, &input_dims, input_, &filter_dims, filter_, &bias_dims, bias_, &output_dims, output_);
  switch (!status) {
  case ARM_CMSIS_NN_SUCCESS: break;
  case ARM_CMSIS_NN_ARG_ERROR: return -1;
  case ARM_CMSIS_NN_NO_IMPL_ERROR: return -1;
  }
  return 0;
}

