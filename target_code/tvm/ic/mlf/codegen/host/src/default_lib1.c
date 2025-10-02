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
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_1(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply__cc9246e62aa5afb_(int8_t* p0, int16_t* p1, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__26c49bbe582da641_(int16_t* p0, int32_t* p1, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__cacd0002c6404764_(int16_t* p0, int32_t* p1, int32_t* compute, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6_(int16_t* p0, int32_t* T_add, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6__1(int16_t* p0, int32_t* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var);
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
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 3; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 96) + (ax2 * 3)) + ax3_inner);
        T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_1(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 32; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 32; ++ax2) {
      for (int32_t ax3_inner = 0; ax3_inner < 16; ++ax3_inner) {
        int32_t cse_var_1 = (((ax0_ax1_fused * 512) + (ax2 * 16)) + ax3_inner);
        T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply__cc9246e62aa5afb_(int8_t* p0, int16_t* p1, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_10_var[160152]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_2_let = (&(global_const_workspace_10_var[159904]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_1_let = (&(global_const_workspace_10_var[159968]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_let = (&(global_const_workspace_10_var[160032]));
  void* fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let = (&(global_const_workspace_10_var[159840]));
  void* fused_cast_constant_let = (&(global_const_workspace_10_var[160156]));
  void* fused_cast_subtract_fixed_point_multiply_add_constant_let = (&(global_const_workspace_10_var[142848]));
  void* pad_temp_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 34; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        int16_t condval;
        if (((((1 <= i0_i1_fused) && (i0_i1_fused < 33)) && (1 <= i2)) && (i2 < 33))) {
          condval = p1[((((i0_i1_fused * 512) + cse_var_1) + i3) - 528)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 544) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 16) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 544) + (ry * 544)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused & 31) * 16)) + rc)]) * ((int32_t)((int16_t*)fused_cast_subtract_fixed_point_multiply_add_constant_let)[((((ry * 768) + (rx * 256)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_2_let)[ax3] + 31)))) + 4;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_constant_2_let)[ax3] + 31)))) + 4;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = (((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0])) << ((int64_t)0)) : ((int64_t)(((int32_t)p0[cse_var_2]) - ((int32_t*)fused_cast_constant_let)[0]))) * (int64_t)1660533717) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + ((int32_t)(((((2 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)2)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1098017566) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31))))) - 128;
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_subtract[cse_var_2] = (((int16_t)((v__5) > (-128) ? (v__5) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  int32_t pool_sum[64];
  for (int32_t ax3_init = 0; ax3_init < 64; ++ax3_init) {
    pool_sum[ax3_init] = 0;
  }
  for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 64; ++rv0_rv1_fused) {
    for (int32_t ax3 = 0; ax3 < 64; ++ax3) {
      pool_sum[ax3] = (pool_sum[ax3] + p0[((rv0_rv1_fused * 64) + ax3)]);
    }
  }
  for (int32_t ax3_1 = 0; ax3_1 < 64; ++ax3_1) {
    T_cast[ax3_1] = ((int8_t)(pool_sum[ax3_1] / 64));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_28_var[160096]));
  void* fused_constant_8_let = (&(global_const_workspace_28_var[151552]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    int32_t compute_global[5];
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      compute_global[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 64; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        compute_global[x_c] = (compute_global[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_8_let)[(((ax1_outer_ax0_outer_fused * 320) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t v_ = ((int32_t)(((((0 != 0) ? (((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(compute_global[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1552512742) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) + 24;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_multiply[cse_var_1] = (((float)(((v__1) > (-128) ? (v__1) : (-128)) - 24)) * 1.718535e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_conv2d_add_constant_2_let = (&(global_const_workspace_4_var[159648]));
  void* fused_nn_conv2d_add_constant_1_let = (&(global_const_workspace_4_var[159712]));
  void* fused_nn_conv2d_add_constant_let = (&(global_const_workspace_4_var[159776]));
  void* fused_nn_conv2d_constant_let = (&(global_const_workspace_4_var[159392]));
  void* fused_constant_let = (&(global_const_workspace_4_var[153856]));
  void* pad_temp_let = (&(global_workspace_5_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 34; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 3; ++i3) {
        int32_t cse_var_1 = (i2 * 3);
        int16_t condval;
        if (((((1 <= i0_i1_fused) && (i0_i1_fused < 33)) && (1 <= i2)) && (i2 < 33))) {
          condval = p0[((((i0_i1_fused * 96) + cse_var_1) + i3) - 99)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 102) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 3; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 102) + (ry * 102)) + (rx * 3)) + ((ax0_ax1_fused_ax2_fused & 31) * 3)) + rc)]) * ((int32_t)((int16_t*)fused_constant_let)[((((ry * 144) + (rx * 48)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_2_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = ((int8_t)((v__1) > (-128) ? (v__1) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_conv2d_add_constant_5_let = (&(global_const_workspace_8_var[159456]));
  void* fused_nn_conv2d_add_constant_4_let = (&(global_const_workspace_8_var[159520]));
  void* fused_nn_conv2d_add_constant_3_let = (&(global_const_workspace_8_var[159584]));
  void* fused_nn_conv2d_constant_1_let = (&(global_const_workspace_8_var[159328]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[138240]));
  void* pad_temp_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 34; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 34; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        int16_t condval;
        if (((((1 <= i0_i1_fused) && (i0_i1_fused < 33)) && (1 <= i2)) && (i2 < 33))) {
          condval = p0[((((i0_i1_fused * 512) + cse_var_1) + i3) - 528)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 544) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 1024; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 16; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 5) * 544) + (ry * 544)) + (rx * 16)) + ((ax0_ax1_fused_ax2_fused & 31) * 16)) + rc)]) * ((int32_t)((int16_t*)fused_constant_1_let)[((((ry * 768) + (rx * 256)) + (rc * 16)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_1_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_3_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_5_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 16) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_conv2d_add_constant_8_let = (&(global_const_workspace_12_var[158304]));
  void* fused_nn_conv2d_add_constant_7_let = (&(global_const_workspace_12_var[158432]));
  void* fused_nn_conv2d_add_constant_6_let = (&(global_const_workspace_12_var[158560]));
  void* fused_nn_conv2d_constant_2_let = (&(global_const_workspace_12_var[158048]));
  void* fused_constant_2_let = (&(global_const_workspace_12_var[129024]));
  void* pad_temp_let = (&(global_workspace_13_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 33; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 33; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        int16_t condval;
        if (((i0_i1_fused < 32) && (i2 < 32))) {
          condval = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 528) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 16; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 4) * 1056) + (ry * 528)) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + (rx * 16)) + rc)]) * ((int32_t)((int16_t*)fused_constant_2_let)[((((ry * 1536) + (rx * 512)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_2_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_6_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_8_let)[ax3] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(int16_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_conv2d_add_constant_17_let = (&(global_const_workspace_18_var[157024]));
  void* fused_nn_conv2d_add_constant_16_let = (&(global_const_workspace_18_var[157280]));
  void* fused_nn_conv2d_add_constant_15_let = (&(global_const_workspace_18_var[157536]));
  void* fused_nn_conv2d_constant_5_let = (&(global_const_workspace_18_var[155232]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[73728]));
  void* pad_temp_let = (&(global_workspace_19_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 17; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 17; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        int16_t condval;
        if (((i0_i1_fused < 16) && (i2 < 16))) {
          condval = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 544) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 3) * 1088) + (ry * 544)) + ((ax0_ax1_fused_ax2_fused & 7) * 64)) + (rx * 32)) + rc)]) * ((int32_t)((int16_t*)fused_constant_5_let)[((((ry * 6144) + (rx * 2048)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_5_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_15_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_17_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_17_let)[ax3_inner] + 31)))) - 128;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_subtract[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int16_t)((v__1) > (-128) ? (v__1) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__26c49bbe582da641_(int16_t* p0, int32_t* p1, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_1_let = (&(global_const_workspace_16_var[160144]));
  void* fused_nn_conv2d_add_constant_14_let = (&(global_const_workspace_16_var[158688]));
  void* fused_nn_conv2d_add_constant_13_let = (&(global_const_workspace_16_var[158816]));
  void* fused_nn_conv2d_add_constant_12_let = (&(global_const_workspace_16_var[158944]));
  void* fused_nn_conv2d_constant_4_let = (&(global_const_workspace_16_var[157792]));
  void* fused_constant_4_let = (&(global_const_workspace_16_var[152832]));
  void* pad_temp_let = (&(global_workspace_17_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 31; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 31; ++i2) {
      for (int32_t i3 = 0; i3 < 16; ++i3) {
        int32_t cse_var_1 = (i2 * 16);
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 496) + cse_var_1) + i3)] = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      int32_t cse_var_2 = ((ax0_ax1_fused_ax2_fused * 32) + ax3);
      conv2d_nhwc[0] = 0;
      for (int32_t rc = 0; rc < 16; ++rc) {
        conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((ax0_ax1_fused_ax2_fused >> 4) * 992) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + rc)]) * ((int32_t)((int16_t*)fused_constant_4_let)[((rc * 32) + ax3)])));
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31)))) - 17;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_4_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_12_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_14_let)[ax3] + 31)))) - 17;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      int32_t v__4 = ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_1_let)[0]))) * (int64_t)1805621035) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + p1[cse_var_2];
      int32_t v__5 = (v__4) < (127) ? (v__4) : (127);
      T_subtract[cse_var_2] = (((int16_t)((v__5) > (-128) ? (v__5) : (-128))) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__cacd0002c6404764_(int16_t* p0, int32_t* p1, int32_t* compute, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_3_let = (&(global_const_workspace_22_var[160136]));
  void* fused_nn_conv2d_add_constant_23_let = (&(global_const_workspace_22_var[155488]));
  void* fused_nn_conv2d_add_constant_22_let = (&(global_const_workspace_22_var[155744]));
  void* fused_nn_conv2d_add_constant_21_let = (&(global_const_workspace_22_var[156000]));
  void* fused_nn_conv2d_constant_7_let = (&(global_const_workspace_22_var[154720]));
  void* fused_constant_7_let = (&(global_const_workspace_22_var[147456]));
  void* pad_temp_let = (&(global_workspace_23_var[47136]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 15; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 15; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 480) + cse_var_1) + i3)] = p0[(((i0_i1_fused * 512) + cse_var_1) + i3)];
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 64; ++i0_i1_fused_i2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t rc = 0; rc < 32; ++rc) {
        conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((((i0_i1_fused_i2_fused >> 3) * 960) + ((i0_i1_fused_i2_fused & 7) * 64)) + rc)]) * ((int32_t)((int16_t*)fused_constant_7_let)[((rc * 64) + ff)])));
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 64; ++i3_inner) {
      int32_t cse_var_2 = ((i0_i1_fused_i2_fused * 64) + i3_inner);
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[i3_inner] + ((int32_t*)fused_nn_conv2d_constant_7_let)[i3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_21_let)[i3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_23_let)[i3_inner] + 31)))) + 38;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((0 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0])) << ((int64_t)0)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_3_let)[0]))) * (int64_t)1417215292) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) + p1[cse_var_2];
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      compute[cse_var_2] = ((v__3) > (-128) ? (v__3) : (-128));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6_(int16_t* p0, int32_t* T_add, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let = (&(global_const_workspace_14_var[160148]));
  void* fused_nn_conv2d_add_constant_11_let = (&(global_const_workspace_14_var[159072]));
  void* fused_nn_conv2d_add_constant_10_let = (&(global_const_workspace_14_var[159200]));
  void* fused_nn_conv2d_add_constant_9_let = (&(global_const_workspace_14_var[158176]));
  void* fused_nn_conv2d_constant_3_let = (&(global_const_workspace_14_var[157920]));
  void* fused_constant_3_let = (&(global_const_workspace_14_var[110592]));
  void* pad_temp_let = (&(global_workspace_15_var[0]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 18; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 18; ++i2) {
      for (int32_t i3 = 0; i3 < 32; ++i3) {
        int32_t cse_var_1 = (i2 * 32);
        int16_t condval;
        if (((((1 <= i0_i1_fused) && (i0_i1_fused < 17)) && (1 <= i2)) && (i2 < 17))) {
          condval = p0[((((i0_i1_fused * 512) + cse_var_1) + i3) - 544)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 576) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 256; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[1];
    for (int32_t ax3 = 0; ax3 < 32; ++ax3) {
      conv2d_nhwc[0] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 32; ++rc) {
            conv2d_nhwc[0] = (conv2d_nhwc[0] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 4) * 576) + (ry * 576)) + (rx * 32)) + ((ax0_ax1_fused_ax2_fused & 15) * 32)) + rc)]) * ((int32_t)((int16_t*)fused_constant_3_let)[((((ry * 3072) + (rx * 1024)) + (rc * 32)) + ax3)])));
          }
        }
      }
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31)))) + 4;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      int32_t v__2 = ((int32_t)(((((int64_t)(conv2d_nhwc[0] + ((int32_t*)fused_nn_conv2d_constant_3_let)[ax3])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_9_let)[ax3])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_11_let)[ax3] + 31)))) + 4;
      int32_t v__3 = (v__2) < (127) ? (v__2) : (127);
      T_add[((ax0_ax1_fused_ax2_fused * 32) + ax3)] = (((int32_t)(((((2 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0])) << ((int64_t)2)) : ((int64_t)(((v__3) > (-128) ? (v__3) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_let)[0]))) * (int64_t)1140768826) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6__1(int16_t* p0, int32_t* T_add, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_2_let = (&(global_const_workspace_20_var[160140]));
  void* fused_nn_conv2d_add_constant_20_let = (&(global_const_workspace_20_var[156256]));
  void* fused_nn_conv2d_add_constant_19_let = (&(global_const_workspace_20_var[156512]));
  void* fused_nn_conv2d_add_constant_18_let = (&(global_const_workspace_20_var[156768]));
  void* fused_nn_conv2d_constant_6_let = (&(global_const_workspace_20_var[154976]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[0]));
  void* pad_temp_let = (&(global_workspace_21_var[16384]));
  for (int32_t i0_i1_fused = 0; i0_i1_fused < 10; ++i0_i1_fused) {
    for (int32_t i2 = 0; i2 < 10; ++i2) {
      for (int32_t i3 = 0; i3 < 64; ++i3) {
        int32_t cse_var_1 = (i2 * 64);
        int16_t condval;
        if (((((1 <= i0_i1_fused) && (i0_i1_fused < 9)) && (1 <= i2)) && (i2 < 9))) {
          condval = p0[((((i0_i1_fused * 512) + cse_var_1) + i3) - 576)];
        } else {
          condval = (int16_t)0;
        }
        ((int16_t*)pad_temp_let)[(((i0_i1_fused * 640) + cse_var_1) + i3)] = condval;
      }
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 64; ++ax0_ax1_fused_ax2_fused) {
    int32_t conv2d_nhwc[64];
    for (int32_t ff = 0; ff < 64; ++ff) {
      conv2d_nhwc[ff] = 0;
      for (int32_t ry = 0; ry < 3; ++ry) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          for (int32_t rc = 0; rc < 64; ++rc) {
            conv2d_nhwc[ff] = (conv2d_nhwc[ff] + (((int32_t)((int16_t*)pad_temp_let)[((((((ax0_ax1_fused_ax2_fused >> 3) * 640) + (ry * 640)) + (rx * 64)) + ((ax0_ax1_fused_ax2_fused & 7) * 64)) + rc)]) * ((int32_t)((int16_t*)fused_constant_6_let)[((((ry * 12288) + (rx * 4096)) + (rc * 64)) + ff)])));
          }
        }
      }
    }
    for (int32_t ax3_inner = 0; ax3_inner < 64; ++ax3_inner) {
      int32_t v_ = ((int32_t)(((((int64_t)(conv2d_nhwc[ax3_inner] + ((int32_t*)fused_nn_conv2d_constant_6_let)[ax3_inner])) * ((int64_t)((int32_t*)fused_nn_conv2d_add_constant_18_let)[ax3_inner])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3_inner] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_conv2d_add_constant_20_let)[ax3_inner] + 31)))) - 2;
      int32_t v__1 = (v_) < (127) ? (v_) : (127);
      T_add[((ax0_ax1_fused_ax2_fused * 64) + ax3_inner)] = (((int32_t)(((((1 != 0) ? (((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0])) << ((int64_t)1)) : ((int64_t)(((v__1) > (-128) ? (v__1) : (-128)) - ((int32_t*)fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_constant_2_let)[0]))) * (int64_t)1835721671) + ((int64_t)1 << ((int64_t)((0 + 31) - 1)))) >> ((int64_t)(0 + 31)))) - 128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  float T_softmax_maxelem[1];
  float T_softmax_exp[10];
  float T_softmax_expsum[1];
  T_softmax_maxelem[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float v_ = T_softmax_maxelem[0];
    float v__1 = p0[k];
    T_softmax_maxelem[0] = ((v_) > (v__1) ? (v_) : (v__1));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    T_softmax_exp[i1] = expf((p0[i1] - T_softmax_maxelem[0]));
  }
  T_softmax_expsum[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    T_softmax_expsum[0] = (T_softmax_expsum[0] + T_softmax_exp[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    T_softmax_exp[i1_1] = (T_softmax_exp[i1_1] / T_softmax_expsum[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float v__2 = roundf((T_softmax_exp[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float v__3 = (v__2) < (1.270000e+02f) ? (v__2) : (1.270000e+02f);
    T_cast[ax1] = ((int8_t)((v__3) > (-1.280000e+02f) ? (v__3) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
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
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_int8_buffer_var, int8_t* Identity_int8_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_14_let = (&(global_workspace_1_var[128]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[16384]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[128]));
  void* sid_9_let = (&(global_workspace_1_var[47136]));
  void* sid_2_let = (&(global_workspace_1_var[69760]));
  void* sid_1_let = (&(global_workspace_1_var[6936]));
  void* sid_8_let = (&(global_workspace_1_var[30752]));
  void* sid_3_let = (&(global_workspace_1_var[36992]));
  void* sid_4_let = (&(global_workspace_1_var[36992]));
  void* sid_7_let = (&(global_workspace_1_var[69760]));
  void* sid_5_let = (&(global_workspace_1_var[36992]));
  void* sid_6_let = (&(global_workspace_1_var[69760]));
  if (tvmgen_default_fused_cast_subtract(input_1_int8_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_cast_subtract_fixed_point_multiply_add_nn_conv2d_add_fixed_point_multiply__cc9246e62aa5afb_(sid_2_let, sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6_(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__26c49bbe582da641_(sid_5_let, sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_cast_subtract_2(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__eb606f94f03ebac6__1(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_conv2d_add_fixed_point_multiply_per_axis_add_clip_subtract_fixed_point__cacd0002c6404764_(sid_8_let, sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_14_let, Identity_int8_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

