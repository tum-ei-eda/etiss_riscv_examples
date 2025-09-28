// tvm target: c -keys=cpu -constants-byte-alignment=4 -mcpu=generic-rv32 -model=etiss-rv32gc -workspace-byte-alignment=4
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
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
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
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 49; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 10; ++ax2) {
      int32_t cse_var_1 = ((ax0_ax1_fused * 10) + ax2);
      T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)83);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  int32_t pool_sum[64];
  for (int32_t ax3_init = 0; ax3_init < 64; ++ax3_init) {
    pool_sum[ax3_init] = 0;
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 125; ++rv0_rv1_fused) {
    for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
      pool_sum[ax3] = (pool_sum[ax3] + p0[((rv0_rv1_fused * 64) + ax3)]);
    }
  }
  for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
    T_cast[ax3_1] = ((int8_t)(pool_sum[ax3_1] / 125));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_26_var[53248]));
  void* fused_constant_9_let = (&(global_const_workspace_26_var[37888]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    int32_t compute_global[6];
    for (int32_t x_c_init = 0; x_c_init < 6; ++x_c_init) {
      compute_global[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 6; ++x_c) {
        compute_global[x_c] = (compute_global[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_9_let)[(((ax1_outer_ax0_outer_fused * 384) + (k_outer * 6)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 6; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 6) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1278221461) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 14;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 14)) * 1.446925e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_add_constant_26_let = (&(global_const_workspace_20_var[48128]));
  void* fused_nn_conv2d_add_constant_25_let = (&(global_const_workspace_20_var[48384]));
  void* fused_nn_conv2d_add_constant_24_let = (&(global_const_workspace_20_var[48640]));
  void* fused_nn_conv2d_constant_8_let = (&(global_const_workspace_20_var[44032]));
  void* fused_constant_8_let = (&(global_const_workspace_20_var[0]));
  void* pad_temp_let = (&(global_workspace_21_var[32000]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 25; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 125; ++i0_i1_fused_i2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((i0_i1_fused_i2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_8_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[i3_inner] + ((int32_t*)fused_nn_conv2d_constant_8_let)[i3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_24_let)[i3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_26_let)[i3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_26_let)[i3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      compute[((i0_i1_fused_i2_fused * 64) + i3_inner)] = ((v__1) > (-128) ? (v__1) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_4_var[49920]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_4_var[52736]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_4_var[52992]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[46080]));
  void* fused_constant_let = (&(global_const_workspace_4_var[32768]));
  void* pad_temp_let = (&(global_workspace_5_var[16000]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 58; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 12; ++i2) {
      int16_t condval;
      if (((((4 <= i0_i1_fused) && (i0_i1_fused < 53)) && (1 <= i2)) && (i2 < 11))) {
        condval = p0[(((i0_i1_fused * 10) + i2) - 41)];
      } else {
        condval = (int16_t)0;
      }
      ((int16_t*)pad_temp_let)[((i0_i1_fused * 12) + i2)] = condval;
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 125; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t ry = 0; ry < 10; ++ry) {
        for (int32_t rx = 0; rx < 4; ++rx) {
          conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[(((((ax0_ax1_fused_ax2_fused / 5) * 24) + (ry * 12)) + ((ax0_ax1_fused_ax2_fused % 5) * 2)) + rx)]) * ((int32_t)((int16_t*)fused_constant_let)[(((ry * 256) + (rx * 64)) + ff)])));
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_6_var[47360]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_6_var[47616]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_6_var[47872]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_6_var[45824]));
  void* fused_constant_1_let = (&(global_const_workspace_6_var[42880]));
  void* PaddedInput_let = (&(global_workspace_7_var[32000]));
  void* DepthwiseConv2d_let = (&(global_workspace_7_var[0]));
  for (int32_t i1 = 0; i1 < 27; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 26)) && (1 <= i2)) && (i2 < 6))) {
          condval = p0[((((i1 * 320) + cse_var_1) + i3) - 384)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 448) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 25; ++i) {
    for (int32_t j = 0; j < 5; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 320) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 320) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 448) + (di * 448)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 25; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 320) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 25; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 320) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 25; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 320) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 25; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 5; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 320) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 25; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 5; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 320) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 25; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 5; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 320) + (ax2_3 * 64)) + ax3_3);
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
  void* fused_nn_conv2d_add_constant_8_let = (&(global_const_workspace_8_var[46592]));
  void* fused_nn_conv2d_add_constant_7_let = (&(global_const_workspace_8_var[46848]));
  void* fused_nn_conv2d_add_constant_6_let = (&(global_const_workspace_8_var[47104]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_8_var[45568]));
  void* fused_constant_2_let = (&(global_const_workspace_8_var[24576]));
  void* pad_temp_let = (&(global_workspace_9_var[16000]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 25; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 125; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_2_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_6_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_3(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_conv2d_add_constant_11_let = (&(global_const_workspace_10_var[52224]));
  void* fused_nn_conv2d_add_constant_10_let = (&(global_const_workspace_10_var[52480]));
  void* fused_nn_conv2d_add_constant_9_let = (&(global_const_workspace_10_var[46336]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_10_var[45312]));
  void* fused_constant_3_let = (&(global_const_workspace_10_var[41728]));
  void* PaddedInput_let = (&(global_workspace_11_var[32000]));
  void* DepthwiseConv2d_let = (&(global_workspace_11_var[0]));
  for (int32_t i1 = 0; i1 < 27; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 26)) && (1 <= i2)) && (i2 < 6))) {
          condval = p0[((((i1 * 320) + cse_var_1) + i3) - 384)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 448) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 25; ++i) {
    for (int32_t j = 0; j < 5; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 320) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 320) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 448) + (di * 448)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 25; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 320) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 25; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 320) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_9_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_11_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_11_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 25; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 320) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 25; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 5; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 320) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 25; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 5; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 320) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 25; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 5; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 320) + (ax2_3 * 64)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_4(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_add_constant_14_let = (&(global_const_workspace_12_var[51456]));
  void* fused_nn_conv2d_add_constant_13_let = (&(global_const_workspace_12_var[51712]));
  void* fused_nn_conv2d_add_constant_12_let = (&(global_const_workspace_12_var[51968]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_12_var[45056]));
  void* fused_constant_4_let = (&(global_const_workspace_12_var[16384]));
  void* pad_temp_let = (&(global_workspace_13_var[16000]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 25; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 125; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_4_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_12_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_5(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_add_constant_17_let = (&(global_const_workspace_14_var[50688]));
  void* fused_nn_conv2d_add_constant_16_let = (&(global_const_workspace_14_var[50944]));
  void* fused_nn_conv2d_add_constant_15_let = (&(global_const_workspace_14_var[51200]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_14_var[44800]));
  void* fused_constant_5_let = (&(global_const_workspace_14_var[40576]));
  void* PaddedInput_let = (&(global_workspace_15_var[32000]));
  void* DepthwiseConv2d_let = (&(global_workspace_15_var[0]));
  for (int32_t i1 = 0; i1 < 27; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 26)) && (1 <= i2)) && (i2 < 6))) {
          condval = p0[((((i1 * 320) + cse_var_1) + i3) - 384)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 448) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 25; ++i) {
    for (int32_t j = 0; j < 5; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 320) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 320) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 448) + (di * 448)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 25; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 320) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 25; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 320) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_15_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_17_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_17_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 25; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 320) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 25; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 5; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 320) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 25; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 5; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 320) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 25; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 5; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 320) + (ax2_3 * 64)) + ax3_3);
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
  void* fused_nn_conv2d_add_constant_20_let = (&(global_const_workspace_16_var[49664]));
  void* fused_nn_conv2d_add_constant_19_let = (&(global_const_workspace_16_var[50176]));
  void* fused_nn_conv2d_add_constant_18_let = (&(global_const_workspace_16_var[50432]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_16_var[44544]));
  void* fused_constant_6_let = (&(global_const_workspace_16_var[8192]));
  void* pad_temp_let = (&(global_workspace_17_var[16000]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 25; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 5; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (((i0_i1_fused * 320) + (i2 * 64)) + i3);
        ((int16_t*)pad_temp_let)[cse_var_1] = p0[cse_var_1];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 125; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 64; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((ax0_ax1_fused_ax2_fused * 64) + rc)]) * ((int32_t)((int16_t*)fused_constant_6_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_18_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_7(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_add_constant_23_let = (&(global_const_workspace_18_var[48896]));
  void* fused_nn_conv2d_add_constant_22_let = (&(global_const_workspace_18_var[49152]));
  void* fused_nn_conv2d_add_constant_21_let = (&(global_const_workspace_18_var[49408]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_18_var[44288]));
  void* fused_constant_7_let = (&(global_const_workspace_18_var[39424]));
  void* PaddedInput_let = (&(global_workspace_19_var[32000]));
  void* DepthwiseConv2d_let = (&(global_workspace_19_var[0]));
  for (int32_t i1 = 0; i1 < 27; ++i1) {
    for (int32_t i2 = 0; i2 < 7; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i1) && (i1 < 26)) && (1 <= i2)) && (i2 < 6))) {
          condval = p0[((((i1 * 320) + cse_var_1) + i3) - 384)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)PaddedInput_let)[(((i1 * 448) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t i = 0; i < 25; ++i) {
    for (int32_t j = 0; j < 5; ++j) {
      for (int32_t c = 0; c < 64; ++c) {
        ((int32_t*)DepthwiseConv2d_let)[(((i * 320) + (j * 64)) + c)] = 0;
        for (int32_t di = 0; di < 3; ++di) {
          for (int32_t dj = 0; dj < 3; ++dj) {
            int32_t cse_var_4 = (j * 64);
            int32_t cse_var_3 = (dj * 64);
            int32_t cse_var_2 = (((i * 320) + cse_var_4) + c);
            ((int32_t*)DepthwiseConv2d_let)[cse_var_2] = (((int32_t*)DepthwiseConv2d_let)[cse_var_2] + (((int32_t)((int16_t*)PaddedInput_let)[(((((i * 448) + (di * 448)) + cse_var_4) + cse_var_3) + c)]) * ((int32_t)((int16_t*)fused_constant_7_let)[(((di * 192) + cse_var_3) + c)])));
          }
        }
      }
    }
  }
  for (int32_t ax1 = 0; ax1 < 25; ++ax1) {
    for (int32_t ax2 = 0; ax2 < 5; ++ax2) {
      for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
        int32_t cse_var_5 = (((ax1 * 320) + (ax2 * 64)) + ax3);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_5] = (((int32_t*)DepthwiseConv2d_let)[cse_var_5] + ((int32_t*)fused_nn_conv2d_constant_7_let)[ax3]);
      }
    }
  }
  for (int32_t i1_1 = 0; i1_1 < 25; ++i1_1) {
    for (int32_t i2_1 = 0; i2_1 < 5; ++i2_1) {
      for (int32_t i3_1 = 0; i3_1 < 64; ++i3_1) {
        int32_t cse_var_6 = (((i1_1 * 320) + (i2_1 * 64)) + i3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_6] = ((int32_t)(((((int64_t)((int32_t*)DepthwiseConv2d_let)[cse_var_6]) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_21_let)[i3_1])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_1] + 31))));
      }
    }
  }
  for (int32_t ax1_1 = 0; ax1_1 < 25; ++ax1_1) {
    for (int32_t ax2_1 = 0; ax2_1 < 5; ++ax2_1) {
      for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
        int32_t cse_var_7 = (((ax1_1 * 320) + (ax2_1 * 64)) + ax3_1);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_7] = (((int32_t*)DepthwiseConv2d_let)[cse_var_7] - 128);
      }
    }
  }
  for (int32_t i1_2 = 0; i1_2 < 25; ++i1_2) {
    for (int32_t i2_2 = 0; i2_2 < 5; ++i2_2) {
      for (int32_t i3_2 = 0; i3_2 < 64; ++i3_2) {
        int32_t cse_var_8 = (((i1_2 * 320) + (i2_2 * 64)) + i3_2);
        int32_t v_ = ((int32_t*)DepthwiseConv2d_let)[cse_var_8];
        int32_t v__1 = (v_) < (127) ? (v_) : (127);
        ((int32_t*)DepthwiseConv2d_let)[cse_var_8] = ((v__1) > (-128) ? (v__1) : (-128));
      }
    }
  }
  for (int32_t ax1_2 = 0; ax1_2 < 25; ++ax1_2) {
    for (int32_t ax2_2 = 0; ax2_2 < 5; ++ax2_2) {
      for (int32_t ax3_2 = 0; ax3_2 < 64; ++ax3_2) {
        int32_t cse_var_9 = (((ax1_2 * 320) + (ax2_2 * 64)) + ax3_2);
        ((int16_t*)PaddedInput_let)[cse_var_9] = ((int16_t)((int32_t*)DepthwiseConv2d_let)[cse_var_9]);
      }
    }
  }
  for (int32_t ax1_3 = 0; ax1_3 < 25; ++ax1_3) {
    for (int32_t ax2_3 = 0; ax2_3 < 5; ++ax2_3) {
      for (int32_t ax3_3 = 0; ax3_3 < 64; ++ax3_3) {
        int32_t cse_var_10 = (((ax1_3 * 320) + (ax2_3 * 64)) + ax3_3);
        T_subtract[cse_var_10] = (((int16_t*)PaddedInput_let)[cse_var_10] - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  float T_softmax_maxelem[1];
  float T_softmax_exp[12];
  float T_softmax_expsum[1];
  T_softmax_maxelem[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 12; ++k) {
    float v_ = T_softmax_maxelem[0];
    float v__1 = p0[k];
    T_softmax_maxelem[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 12; ++i1) {
    T_softmax_exp[i1] = expf((p0[i1] - T_softmax_maxelem[0]));
  }
  T_softmax_expsum[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 12; ++k_1) {
    T_softmax_expsum[0] = (T_softmax_expsum[0] + T_softmax_exp[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 12; ++i1_1) {
    T_softmax_exp[i1_1] = (T_softmax_exp[i1_1] / T_softmax_expsum[0]);
  }
  for (int32_t ax1 = 0; ax1 < 12; ++ax1) {
    float v__2 = roundf((T_softmax_exp[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_cast[ax1] = ((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 4; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[128]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[128]));
  if (tvmgen_default_fused_cast_subtract(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_3(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_4(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_5(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_6(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_7(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_13_let, Identity_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

