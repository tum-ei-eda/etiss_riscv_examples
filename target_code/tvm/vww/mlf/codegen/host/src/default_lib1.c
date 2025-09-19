// tvm target: c -keys=cpu -constants-byte-alignment=16 -mcpu=generic-rv32 -model=etiss-rv32gc -workspace-byte-alignment=16
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_10(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_11(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_12(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_13(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_14(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_15(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_16(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_17(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_18(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_19(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_20(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_21(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_22(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_23(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_24(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_25(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_3(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_4(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_5(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_6(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_7(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_8(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_9(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_int8_buffer_var, int8_t* Identity_int8_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float roundf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 96; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 96; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 288) + (ax2 * 3)) + ax3_inner);
        T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_58_var, uint8_t* global_workspace_59_var) {
  void* pool_sum_let = (&(global_workspace_59_var[9216]));
  for (int32_t ax3_outer_init = 0; ax3_outer_init < 4; ++ax3_outer_init) {
    for (int32_t ax3_inner_init = 0; ax3_inner_init < 64; ++ax3_inner_init) {
      ((int32_t*)pool_sum_let)[((ax3_outer_init * 64) + ax3_inner_init)] = 0;
    }
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 9; ++rv0_rv1_fused) {
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_2 = (ax3_outer * 64);
        int32_t cse_var_1 = (cse_var_2 + ax3_inner);
        ((int32_t*)pool_sum_let)[cse_var_1] = (((int32_t*)pool_sum_let)[cse_var_1] + p0[(((rv0_rv1_fused * 256) + cse_var_2) + ax3_inner)]);
      }
    }
  }
  for (int32_t ax3 = 0; ax3 < 256; ++ax3) {
    T_cast[ax3] = ((int8_t)(((int32_t*)pool_sum_let)[ax3] / 9));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_62_var, uint8_t* global_workspace_63_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_62_var[460000]));
  void* fused_constant_27_let = (&(global_const_workspace_62_var[425216]));
  int32_t compute_global[2];
  for (int32_t x_c_init = 0; x_c_init < 2; ++x_c_init) {
    compute_global[x_c_init] = 0;
  }
  for (int32_t k_outer = 0; k_outer < 256; ++k_outer) {
    for (int32_t x_c = 0; x_c < 2; ++x_c) {
      compute_global[x_c] = (compute_global[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_27_let)[((k_outer * 2) + x_c)])));
    }
  }
  for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 2; ++ax1_inner_inner) {
    int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[ax1_inner_inner])) << ((int64_t)0)) : ((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[ax1_inner_inner]))) * (int64_t)1387987883) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 5;
    int32_t v__1 = (v_) < (127) ? (v_) : (127);
    T_multiply[ax1_inner_inner] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) + 5)) * 1.463622e-02f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_56_var, uint8_t* global_workspace_57_var) {
  void* fused_nn_conv2d_add_constant_80_let = (&(global_const_workspace_56_var[414976]));
  void* fused_nn_conv2d_add_constant_79_let = (&(global_const_workspace_56_var[416000]));
  void* fused_nn_conv2d_add_constant_78_let = (&(global_const_workspace_56_var[417024]));
  void* fused_nn_conv2d_constant_26_let = (&(global_const_workspace_56_var[411904]));
  void* fused_constant_26_let = (&(global_const_workspace_56_var[0]));
  void* pad_temp_let = (&(global_workspace_57_var[17408]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 256)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 9; ++i0_i1_fused_i2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t i3_outer = 0; i3_outer < 4; ++i3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 256; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 256) + rc)]) * ((int32_t)((int16_t*)fused_constant_26_let)[(((rc * 256) + (i3_outer * 64)) + ff)])));
        }
      }
      for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
        int32_t cse_var_3 = (i3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + i3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[i3_inner] + ((int32_t*)fused_nn_conv2d_constant_26_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_78_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_80_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_80_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        compute[(((i0_i1_fused_i2_fused * 256) + cse_var_3) + i3_inner)] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_4_var[459904]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_4_var[459936]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_4_var[459968]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[459776]));
  void* fused_constant_let = (&(global_const_workspace_4_var[451968]));
  void* pad_temp_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 97; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 97; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (i2 * 3);
        int16_t condval;
        if (((i0_i1_fused < 96) && (i2 < 96))) {
          condval = p0[(((i0_i1_fused * 288) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 291) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused / 48) * 582) + (ry * 291)) + ((ax0_ax1_fused_ax2_fused % 48) * 6)) + (rx * 3)) + rc)]) * ((int32_t)((int16_t*)fused_constant_let)[((((ry * 72) + (rx * 24)) + (rc * 8)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 8) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_6_var[459808]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_6_var[459840]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_6_var[459872]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_6_var[459744]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[457040]));
  void* PaddedInput_let = (&(global_workspace_7_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_7_var[40000]));
  for (int32_t i1 = 0; i1 < 50; ++i1) {
    for (int32_t i2 = 0; i2 < 50; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (i2 * 8);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 49)) && (1 <= i2)) && (i2 < 49))) {
          condval = p0[((((i1 * 384) + cse_var_1) + i3) - 392)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 400) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 48; ++i) {
    for (int32_t j = 0; j < 48; ++j) {
      for (int32_t c = 0; c < 8; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 8)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 8);
            int32_t cse_var_3 = (dj * 8);
            int32_t cse_var_2 = (((i * 384) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 400) + (di * 400)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((di * 24) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 48; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 48; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 8; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 384) + (ax2 * 8)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 48; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 48; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 8; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 384) + (i2_1 * 8)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 48; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 48; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 8; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 384) + (ax2_1 * 8)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 48; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 48; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 8; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 384) + (i2_2 * 8)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 48; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 48; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 8; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 384) + (ax2_2 * 8)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 48; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 48; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 8; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 384) + (ax2_3 * 8)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_10(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_conv2d_add_constant_32_let = (&(global_const_workspace_24_var[454480]));
  void* fused_nn_conv2d_add_constant_31_let = (&(global_const_workspace_24_var[454736]));
  void* fused_nn_conv2d_add_constant_30_let = (&(global_const_workspace_24_var[454992]));
  void* fused_nn_conv2d_constant_10_let = (&(global_const_workspace_24_var[453456]));
  void* fused_constant_10_let = (&(global_const_workspace_24_var[376832]));
  void* pad_temp_let = (&(global_workspace_25_var[40064]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 12; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 144; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_10_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_10_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_30_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_32_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_32_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_11(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_conv2d_add_constant_35_let = (&(global_const_workspace_26_var[453712]));
  void* fused_nn_conv2d_add_constant_34_let = (&(global_const_workspace_26_var[453968]));
  void* fused_nn_conv2d_add_constant_33_let = (&(global_const_workspace_26_var[454224]));
  void* fused_nn_conv2d_constant_11_let = (&(global_const_workspace_26_var[453200]));
  void* fused_constant_11_let = (&(global_const_workspace_26_var[410752]));
  void* PaddedInput_let = (&(global_workspace_27_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_27_var[21632]));
  for (int32_t i1 = 0; i1 < 13; ++i1) {
    for (int32_t i2 = 0; i2 < 13; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((i1 < 12) && (i2 < 12))) {
          condval = p0[(((i1 * 768) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 832) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 384) + (j * 64)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1664) + (di * 832)) + (j * 128)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_11_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_11_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 384) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_33_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_35_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_35_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 384) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 384) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_7];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 384) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_8]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 64)) + ax3_3);
        T_subtract[cse_var_9] = (((int16_t*)PaddedInput_let)[cse_var_9] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_12(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_conv2d_add_constant_38_let = (&(global_const_workspace_28_var[450432]));
  void* fused_nn_conv2d_add_constant_37_let = (&(global_const_workspace_28_var[450944]));
  void* fused_nn_conv2d_add_constant_36_let = (&(global_const_workspace_28_var[451456]));
  void* fused_nn_conv2d_constant_12_let = (&(global_const_workspace_28_var[433024]));
  void* fused_constant_12_let = (&(global_const_workspace_28_var[360448]));
  void* pad_temp_let = (&(global_workspace_29_var[9216]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 64; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_12_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_12_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_36_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_38_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_38_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_13(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_conv2d_add_constant_41_let = (&(global_const_workspace_30_var[448896]));
  void* fused_nn_conv2d_add_constant_40_let = (&(global_const_workspace_30_var[449408]));
  void* fused_nn_conv2d_add_constant_39_let = (&(global_const_workspace_30_var[449920]));
  void* fused_nn_conv2d_constant_13_let = (&(global_const_workspace_30_var[432512]));
  void* fused_constant_13_let = (&(global_const_workspace_30_var[405248]));
  void* PaddedInput_let = (&(global_workspace_31_var[18432]));
  void* DepthwiseConv2d_let = (&(global_workspace_31_var[0]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 7)) && (1 <= i2)) && (i2 < 7))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 896)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1024) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_13_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_13_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_39_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_41_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_41_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_14(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* fused_nn_conv2d_add_constant_44_let = (&(global_const_workspace_32_var[447360]));
  void* fused_nn_conv2d_add_constant_43_let = (&(global_const_workspace_32_var[447872]));
  void* fused_nn_conv2d_add_constant_42_let = (&(global_const_workspace_32_var[448384]));
  void* fused_nn_conv2d_constant_14_let = (&(global_const_workspace_32_var[432000]));
  void* fused_constant_14_let = (&(global_const_workspace_32_var[327680]));
  void* pad_temp_let = (&(global_workspace_33_var[9216]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_14_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_14_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_42_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_44_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_44_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_15(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_34_var, uint8_t* global_workspace_35_var) {
  void* fused_nn_conv2d_add_constant_47_let = (&(global_const_workspace_34_var[445824]));
  void* fused_nn_conv2d_add_constant_46_let = (&(global_const_workspace_34_var[446336]));
  void* fused_nn_conv2d_add_constant_45_let = (&(global_const_workspace_34_var[446848]));
  void* fused_nn_conv2d_constant_15_let = (&(global_const_workspace_34_var[431488]));
  void* fused_constant_15_let = (&(global_const_workspace_34_var[402944]));
  void* PaddedInput_let = (&(global_workspace_35_var[18432]));
  void* DepthwiseConv2d_let = (&(global_workspace_35_var[0]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 7)) && (1 <= i2)) && (i2 < 7))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 896)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1024) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_15_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_15_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_45_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_47_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_47_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_16(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_36_var, uint8_t* global_workspace_37_var) {
  void* fused_nn_conv2d_add_constant_50_let = (&(global_const_workspace_36_var[444288]));
  void* fused_nn_conv2d_add_constant_49_let = (&(global_const_workspace_36_var[444800]));
  void* fused_nn_conv2d_add_constant_48_let = (&(global_const_workspace_36_var[445312]));
  void* fused_nn_conv2d_constant_16_let = (&(global_const_workspace_36_var[430976]));
  void* fused_constant_16_let = (&(global_const_workspace_36_var[294912]));
  void* pad_temp_let = (&(global_workspace_37_var[9216]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_16_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_16_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_48_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_50_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_50_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_17(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_38_var, uint8_t* global_workspace_39_var) {
  void* fused_nn_conv2d_add_constant_53_let = (&(global_const_workspace_38_var[442752]));
  void* fused_nn_conv2d_add_constant_52_let = (&(global_const_workspace_38_var[443264]));
  void* fused_nn_conv2d_add_constant_51_let = (&(global_const_workspace_38_var[443776]));
  void* fused_nn_conv2d_constant_17_let = (&(global_const_workspace_38_var[430464]));
  void* fused_constant_17_let = (&(global_const_workspace_38_var[400640]));
  void* PaddedInput_let = (&(global_workspace_39_var[18432]));
  void* DepthwiseConv2d_let = (&(global_workspace_39_var[0]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 7)) && (1 <= i2)) && (i2 < 7))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 896)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1024) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_17_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_17_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_51_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_53_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_53_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_18(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_40_var, uint8_t* global_workspace_41_var) {
  void* fused_nn_conv2d_add_constant_56_let = (&(global_const_workspace_40_var[441216]));
  void* fused_nn_conv2d_add_constant_55_let = (&(global_const_workspace_40_var[441728]));
  void* fused_nn_conv2d_add_constant_54_let = (&(global_const_workspace_40_var[442240]));
  void* fused_nn_conv2d_constant_18_let = (&(global_const_workspace_40_var[429952]));
  void* fused_constant_18_let = (&(global_const_workspace_40_var[262144]));
  void* pad_temp_let = (&(global_workspace_41_var[9216]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_18_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_18_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_54_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_56_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_56_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_19(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_42_var, uint8_t* global_workspace_43_var) {
  void* fused_nn_conv2d_add_constant_59_let = (&(global_const_workspace_42_var[439680]));
  void* fused_nn_conv2d_add_constant_58_let = (&(global_const_workspace_42_var[440192]));
  void* fused_nn_conv2d_add_constant_57_let = (&(global_const_workspace_42_var[440704]));
  void* fused_nn_conv2d_constant_19_let = (&(global_const_workspace_42_var[429440]));
  void* fused_constant_19_let = (&(global_const_workspace_42_var[398336]));
  void* PaddedInput_let = (&(global_workspace_43_var[18432]));
  void* DepthwiseConv2d_let = (&(global_workspace_43_var[0]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 7)) && (1 <= i2)) && (i2 < 7))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 896)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1024) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_19_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_19_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_57_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_59_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_59_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_add_constant_8_let = (&(global_const_workspace_8_var[459424]));
  void* fused_nn_conv2d_add_constant_7_let = (&(global_const_workspace_8_var[459488]));
  void* fused_nn_conv2d_add_constant_6_let = (&(global_const_workspace_8_var[459552]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_8_var[459296]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[456784]));
  void* pad_temp_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 48; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 48; ++i2) {
      for (int32_t i3 = 0; i3 < 8; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 8)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 2304; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 8; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 8) + rc)]) * ((int32_t)((int16_t*)fused_constant_2_let)[((rc * 16) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_20(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_44_var, uint8_t* global_workspace_45_var) {
  void* fused_nn_conv2d_add_constant_62_let = (&(global_const_workspace_44_var[438144]));
  void* fused_nn_conv2d_add_constant_61_let = (&(global_const_workspace_44_var[438656]));
  void* fused_nn_conv2d_add_constant_60_let = (&(global_const_workspace_44_var[439168]));
  void* fused_nn_conv2d_constant_20_let = (&(global_const_workspace_44_var[428928]));
  void* fused_constant_20_let = (&(global_const_workspace_44_var[229376]));
  void* pad_temp_let = (&(global_workspace_45_var[9216]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_20_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_20_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_60_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_62_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_62_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_21(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_46_var, uint8_t* global_workspace_47_var) {
  void* fused_nn_conv2d_add_constant_65_let = (&(global_const_workspace_46_var[436608]));
  void* fused_nn_conv2d_add_constant_64_let = (&(global_const_workspace_46_var[437120]));
  void* fused_nn_conv2d_add_constant_63_let = (&(global_const_workspace_46_var[437632]));
  void* fused_nn_conv2d_constant_21_let = (&(global_const_workspace_46_var[428416]));
  void* fused_constant_21_let = (&(global_const_workspace_46_var[396032]));
  void* PaddedInput_let = (&(global_workspace_47_var[18432]));
  void* DepthwiseConv2d_let = (&(global_workspace_47_var[0]));
  for (int32_t i1 = 0; i1 < 8; ++i1) {
    for (int32_t i2 = 0; i2 < 8; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 7)) && (1 <= i2)) && (i2 < 7))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 896)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1024) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 6; ++i) {
    for (int32_t j = 0; j < 6; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 128);
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1024) + (di * 1024)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_21_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 6; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_21_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 6; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 6; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_63_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_65_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_65_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 6; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 6; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 6; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 6; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 6; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 6; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 6; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 6; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_22(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_48_var, uint8_t* global_workspace_49_var) {
  void* fused_nn_conv2d_add_constant_68_let = (&(global_const_workspace_48_var[435072]));
  void* fused_nn_conv2d_add_constant_67_let = (&(global_const_workspace_48_var[435584]));
  void* fused_nn_conv2d_add_constant_66_let = (&(global_const_workspace_48_var[436096]));
  void* fused_nn_conv2d_constant_22_let = (&(global_const_workspace_48_var[427904]));
  void* fused_constant_22_let = (&(global_const_workspace_48_var[196608]));
  void* pad_temp_let = (&(global_workspace_49_var[21760]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 6; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 6; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_22_let)[(((rc * 128) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_22_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_66_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_68_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_68_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 128) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_23(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_50_var, uint8_t* global_workspace_51_var) {
  void* fused_nn_conv2d_add_constant_71_let = (&(global_const_workspace_50_var[433536]));
  void* fused_nn_conv2d_add_constant_70_let = (&(global_const_workspace_50_var[434048]));
  void* fused_nn_conv2d_add_constant_69_let = (&(global_const_workspace_50_var[434560]));
  void* fused_nn_conv2d_constant_23_let = (&(global_const_workspace_50_var[427392]));
  void* fused_constant_23_let = (&(global_const_workspace_50_var[393728]));
  void* PaddedInput_let = (&(global_workspace_51_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_51_var[12544]));
  for (int32_t i1 = 0; i1 < 7; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (i2 * 128);
        int16_t condval;
        if (((i1 < 6) && (i2 < 6))) {
          condval = p0[(((i1 * 768) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 896) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 3; ++i) {
    for (int32_t j = 0; j < 3; ++j) {
      for (int32_t c = 0; c < 128; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 128)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 128);
            int32_t cse_var_2 = (((i * 384) + (j * 128)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1792) + (di * 896)) + (j * 256)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_23_let)[(((di * 384) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 128; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 128)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_23_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 3; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 3; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 128; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 384) + (i2_1 * 128)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_69_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_71_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_71_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 3; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 128; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 384) + (ax2_1 * 128)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 3; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 3; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 128; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 384) + (i2_2 * 128)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_7];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 3; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 3; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 128; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 384) + (ax2_2 * 128)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_8]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 3; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 3; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 128; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 128)) + ax3_3);
        T_subtract[cse_var_9] = (((int16_t*)PaddedInput_let)[cse_var_9] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_24(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_52_var, uint8_t* global_workspace_53_var) {
  void* fused_nn_conv2d_add_constant_74_let = (&(global_const_workspace_52_var[421120]));
  void* fused_nn_conv2d_add_constant_73_let = (&(global_const_workspace_52_var[422144]));
  void* fused_nn_conv2d_add_constant_72_let = (&(global_const_workspace_52_var[423168]));
  void* fused_nn_conv2d_constant_24_let = (&(global_const_workspace_52_var[413952]));
  void* fused_constant_24_let = (&(global_const_workspace_52_var[131072]));
  void* pad_temp_let = (&(global_workspace_53_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 3; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 3; ++i2) {
      for (int32_t i3 = 0; i3 < 128; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 128)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 9; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ax3_outer = 0; ax3_outer < 4; ++ax3_outer) {
      for (int32_t ff = 0; ff < 64; ++ff) {
        conv2d_nhwc[ff] = 0;
        for (int32_t rc = 0; rc < 128; ++rc) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 128) + rc)]) * ((int32_t)((int16_t*)fused_constant_24_let)[(((rc * 256) + (ax3_outer * 64)) + ff)])));
        }
      }
      for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
        int32_t cse_var_3 = (ax3_outer * 64);
        int32_t cse_var_2 = (cse_var_3 + ax3_inner);
        int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_24_let)[cse_var_2])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_72_let)[cse_var_2])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_74_let)[cse_var_2] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_74_let)[cse_var_2] + 31)))) - 128;
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        T_subtract[(((ax0_ax1_fused_ax2_fused * 256) + cse_var_3) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_25(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_54_var, uint8_t* global_workspace_55_var) {
  void* fused_nn_conv2d_add_constant_77_let = (&(global_const_workspace_54_var[418048]));
  void* fused_nn_conv2d_add_constant_76_let = (&(global_const_workspace_54_var[419072]));
  void* fused_nn_conv2d_add_constant_75_let = (&(global_const_workspace_54_var[420096]));
  void* fused_nn_conv2d_constant_25_let = (&(global_const_workspace_54_var[412928]));
  void* fused_constant_25_let = (&(global_const_workspace_54_var[385024]));
  void* PaddedInput_let = (&(global_workspace_55_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_55_var[12800]));
  for (int32_t i1 = 0; i1 < 5; ++i1) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 256; ++i3) {
        int32_t cse_var_1 = (i2 * 256);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 4)) && (1 <= i2)) && (i2 < 4))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 1024)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 1280) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 3; ++i) {
    for (int32_t j = 0; j < 3; ++j) {
      for (int32_t c = 0; c < 256; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 256)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 256);
            int32_t cse_var_3 = (dj * 256);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1280) + (di * 1280)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_25_let)[(((di * 768) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 3; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 3; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 256; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 256)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_25_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 3; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 3; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 256; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 256)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_75_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_77_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_77_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 3; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 3; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 256; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 256)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 3; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 3; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 256; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 256)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 3; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 3; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 256; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 256)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 3; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 3; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 256; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 256)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_3(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_add_constant_11_let = (&(global_const_workspace_10_var[459616]));
  void* fused_nn_conv2d_add_constant_10_let = (&(global_const_workspace_10_var[459680]));
  void* fused_nn_conv2d_add_constant_9_let = (&(global_const_workspace_10_var[459360]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_10_var[459232]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[452400]));
  void* PaddedInput_let = (&(global_workspace_11_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_11_var[76832]));
  for (int32_t i1 = 0; i1 < 49; ++i1) {
    for (int32_t i2 = 0; i2 < 49; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        int16_t condval;
        if (((i1 < 48) && (i2 < 48))) {
          condval = p0[(((i1 * 768) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 784) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 24; ++i) {
    for (int32_t j = 0; j < 24; ++j) {
      for (int32_t c = 0; c < 16; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 16)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 16);
            int32_t cse_var_2 = (((i * 384) + (j * 16)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1568) + (di * 784)) + (j * 32)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((di * 48) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 16)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 24; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 24; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 16; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 384) + (i2_1 * 16)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_9_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_11_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_11_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 24; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 24; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 16; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 384) + (ax2_1 * 16)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 24; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 24; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 16; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 384) + (i2_2 * 16)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_7];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 24; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 24; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 16; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 384) + (ax2_2 * 16)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_8]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 24; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 24; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 16; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 16)) + ax3_3);
        T_subtract[cse_var_9] = (((int16_t*)PaddedInput_let)[cse_var_9] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_4(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_add_constant_14_let = (&(global_const_workspace_12_var[458848]));
  void* fused_nn_conv2d_add_constant_13_let = (&(global_const_workspace_12_var[458976]));
  void* fused_nn_conv2d_add_constant_12_let = (&(global_const_workspace_12_var[459104]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_12_var[457568]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[424192]));
  void* pad_temp_let = (&(global_workspace_13_var[36864]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 24; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 24; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 16)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 576; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 16) + rc)]) * ((int32_t)((int16_t*)fused_constant_4_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_5(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_add_constant_17_let = (&(global_const_workspace_14_var[458464]));
  void* fused_nn_conv2d_add_constant_16_let = (&(global_const_workspace_14_var[458592]));
  void* fused_nn_conv2d_add_constant_15_let = (&(global_const_workspace_14_var[458720]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_14_var[457440]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[426816]));
  void* PaddedInput_let = (&(global_workspace_15_var[73728]));
  void* DepthwiseConv2d_let = (&(global_workspace_15_var[0]));
  for (int32_t i1 = 0; i1 < 26; ++i1) {
    for (int32_t i2 = 0; i2 < 26; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 25)) && (1 <= i2)) && (i2 < 25))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 800)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 832) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 24; ++i) {
    for (int32_t j = 0; j < 24; ++j) {
      for (int32_t c = 0; c < 32; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 32)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 32);
            int32_t cse_var_3 = (dj * 32);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 832) + (di * 832)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((di * 96) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 24; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 32)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 24; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 24; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 32)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_15_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_17_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_17_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 24; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 24; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 32; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 32)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 24; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 24; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 32; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 32)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 24; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 24; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 32; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 32)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 24; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 24; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 32; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 32)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_6(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_add_constant_20_let = (&(global_const_workspace_16_var[458080]));
  void* fused_nn_conv2d_add_constant_19_let = (&(global_const_workspace_16_var[458208]));
  void* fused_nn_conv2d_add_constant_18_let = (&(global_const_workspace_16_var[458336]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_16_var[457312]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[407552]));
  void* pad_temp_let = (&(global_workspace_17_var[76864]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 24; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 24; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 768) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 576; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)fused_constant_6_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_18_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_7(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_add_constant_23_let = (&(global_const_workspace_18_var[457696]));
  void* fused_nn_conv2d_add_constant_22_let = (&(global_const_workspace_18_var[457824]));
  void* fused_nn_conv2d_add_constant_21_let = (&(global_const_workspace_18_var[457952]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_18_var[457184]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[426240]));
  void* PaddedInput_let = (&(global_workspace_19_var[0]));
  void* DepthwiseConv2d_let = (&(global_workspace_19_var[40000]));
  for (int32_t i1 = 0; i1 < 25; ++i1) {
    for (int32_t i2 = 0; i2 < 25; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        int16_t condval;
        if (((i1 < 24) && (i2 < 24))) {
          condval = p0[(((i1 * 768) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 800) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 12; ++i) {
    for (int32_t j = 0; j < 12; ++j) {
      for (int32_t c = 0; c < 32; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 384) + (j * 32)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_3 = (dj * 32);
            int32_t cse_var_2 = (((i * 384) + (j * 32)) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 1600) + (di * 800)) + (j * 64)) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((di * 96) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
        int32_t cse_var_4 = (((ax1 * 384) + (ax2 * 32)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_4] = (((int32_t*)DepthwiseConv2d_let)[cse_var_4] + ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 12; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 12; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 32; ++i3_1) {
        int32_t cse_var_5 = (((i1_1 * 384) + (i2_1 * 32)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_5]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_21_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 12; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 12; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 32; ++ax3_1) {
        int32_t cse_var_6 = (((ax1_1 * 384) + (ax2_1 * 32)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = (((int32_t*)DepthwiseConv2d_let)[cse_var_6] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 12; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 12; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 32; ++i3_2) {
        int32_t cse_var_7 = (((i1_2 * 384) + (i2_2 * 32)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_7];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 12; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 12; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 32; ++ax3_2) {
        int32_t cse_var_8 = (((ax1_2 * 384) + (ax2_2 * 32)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_8] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_8]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 12; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 12; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 32; ++ax3_3) {
        int32_t cse_var_9 = (((ax1_3 * 384) + (ax2_3 * 32)) + ax3_3);
        T_subtract[cse_var_9] = (((int16_t*)PaddedInput_let)[cse_var_9] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_8(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_add_constant_26_let = (&(global_const_workspace_20_var[456016]));
  void* fused_nn_conv2d_add_constant_25_let = (&(global_const_workspace_20_var[456272]));
  void* fused_nn_conv2d_add_constant_24_let = (&(global_const_workspace_20_var[456528]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_20_var[452944]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[389632]));
  void* pad_temp_let = (&(global_workspace_21_var[18432]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 12; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 384) + (i2 * 32)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 144; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 32) + rc)]) * ((int32_t)((int16_t*)fused_constant_8_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_8_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_24_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_26_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_26_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_9(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_add_constant_29_let = (&(global_const_workspace_22_var[455248]));
  void* fused_nn_conv2d_add_constant_28_let = (&(global_const_workspace_22_var[455504]));
  void* fused_nn_conv2d_add_constant_27_let = (&(global_const_workspace_22_var[455760]));
  void* fused_nn_conv2d_constant_9_let = (&(global_const_workspace_22_var[452688]));
  void* fused_constant_9_let = (&(global_const_workspace_22_var[409600]));
  void* PaddedInput_let = (&(global_workspace_23_var[36864]));
  void* DepthwiseConv2d_let = (&(global_workspace_23_var[0]));
  for (int32_t i1 = 0; i1 < 14; ++i1) {
    for (int32_t i2 = 0; i2 < 14; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 13)) && (1 <= i2)) && (i2 < 13))) {
          condval = p0[((((i1 * 768) + cse_var_1) + i3) - 832)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 896) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 12; ++i) {
    for (int32_t j = 0; j < 12; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 768) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 768) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 896) + (di * 896)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_9_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 768) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_9_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 12; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 12; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 768) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_27_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_29_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_29_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 12; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 12; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 768) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 12; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 12; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 768) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 12; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 12; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 768) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 12; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 12; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 768) + (ax2_3 * 64)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_64_var, uint8_t* global_workspace_65_var) {
  float T_softmax_maxelem[1];
  float T_softmax_exp[2];
  float T_softmax_expsum[1];
  T_softmax_maxelem[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 2; ++k) {
    float v_ = T_softmax_maxelem[0];
    float v__1 = p0[k];
    T_softmax_maxelem[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 2; ++i1) {
    T_softmax_exp[i1] = expf((p0[i1] - T_softmax_maxelem[0]));
  }
  T_softmax_expsum[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 2; ++k_1) {
    T_softmax_expsum[0] = (T_softmax_expsum[0] + T_softmax_exp[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 2; ++i1_1) {
    T_softmax_exp[i1_1] = (T_softmax_exp[i1_1] / T_softmax_expsum[0]);
  }
  for (int32_t ax1 = 0; ax1 < 2; ++ax1) {
    float v__2 = roundf((T_softmax_exp[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_cast[ax1] = ((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_60_var, uint8_t* global_workspace_61_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 16; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_int8_buffer_var, int8_t* Identity_int8_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_26_let = (&(global_workspace_1_var[12800]));
  void* sid_23_let = (&(global_workspace_1_var[0]));
  void* sid_22_let = (&(global_workspace_1_var[0]));
  void* sid_24_let = (&(global_workspace_1_var[12544]));
  void* sid_25_let = (&(global_workspace_1_var[12544]));
  void* sid_18_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[0]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_27_let = (&(global_workspace_1_var[12800]));
  void* sid_4_let = (&(global_workspace_1_var[76832]));
  void* sid_29_let = (&(global_workspace_1_var[512]));
  void* sid_2_let = (&(global_workspace_1_var[56464]));
  void* sid_5_let = (&(global_workspace_1_var[76832]));
  void* sid_9_let = (&(global_workspace_1_var[40000]));
  void* sid_1_let = (&(global_workspace_1_var[56464]));
  void* sid_11_let = (&(global_workspace_1_var[0]));
  void* sid_20_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[40000]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[40000]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[21632]));
  void* sid_14_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[21632]));
  void* sid_19_let = (&(global_workspace_1_var[0]));
  void* sid_30_let = (&(global_workspace_1_var[0]));
  void* sid_31_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_fused_cast_subtract(input_1_int8_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_3(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_4(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_5(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_6(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_7(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_8(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_9(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_10(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_11(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_12(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_13(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_14(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_15(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_16(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_17(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_18(sid_19_let, sid_20_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_19(sid_20_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_20(sid_21_let, sid_22_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_21(sid_22_let, sid_23_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_22(sid_23_let, sid_24_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_23(sid_24_let, sid_25_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_24(sid_25_let, sid_26_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_25(sid_26_let, sid_27_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(sid_27_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast(sid_28_let, sid_29_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract(sid_29_let, sid_30_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(sid_30_let, sid_31_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_31_let, Identity_int8_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

