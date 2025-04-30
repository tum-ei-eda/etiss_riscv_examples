// tvm target: c -keys=cpu -constants-byte-alignment=4 -workspace-byte-alignment=4
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_4_var[534528]));
  void* fused_constant_let = (&(global_const_workspace_4_var[163840]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_5_var[1408]));
    void* compute_global_let = (&(global_workspace_5_var[1536]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 640; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_let)[((((ax1_outer_ax0_outer_fused * 20480) + (y_inner_outer_x_inner_outer_fused * 5120)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1638001653) + ((int64_t)1 << ((int64_t)((8 + 31) - 1)))) >> ((int64_t)(8 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_1(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_8_var[534016]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[491520]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_9_var[384]));
    void* compute_global_let = (&(global_workspace_9_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_1_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1442659874) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_2(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_10_var[533504]));
  void* fused_constant_2_let = (&(global_const_workspace_10_var[458752]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_11_var[384]));
    void* compute_global_let = (&(global_workspace_11_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_2_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1185020362) + ((int64_t)1 << ((int64_t)((2 + 31) - 1)))) >> ((int64_t)(2 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_3(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_dense_pack_constant_3_let = (&(global_const_workspace_12_var[532992]));
  void* fused_constant_3_let = (&(global_const_workspace_12_var[425984]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_13_var[384]));
    void* compute_global_let = (&(global_workspace_13_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_3_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_3_let)[cse_var_1]))) * (int64_t)1439819933) + ((int64_t)1 << ((int64_t)((4 + 31) - 1)))) >> ((int64_t)(4 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_4(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* fused_nn_contrib_dense_pack_constant_4_let = (&(global_const_workspace_14_var[535040]));
  void* fused_constant_4_let = (&(global_const_workspace_14_var[528896]));
  void* compute_global_let = (&(global_workspace_15_var[256]));
  for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
    ((int32_t*)compute_global_let)[x_c_init] = 0;
  }
  for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
    for (int32_t x_c = 0; x_c < 8; ++x_c) {
      ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_4_let)[((k_outer * 8) + x_c)])));
    }
  }
  for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
    int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[ax1_inner_inner])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_4_let)[ax1_inner_inner]))) * (int64_t)1085889771) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
    int32_t __2 = (__1) < (127) ? (__1) : (127);
    T_cast[ax1_inner_inner] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_5(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_dense_pack_constant_5_let = (&(global_const_workspace_18_var[532480]));
  void* fused_constant_5_let = (&(global_const_workspace_18_var[526848]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_19_var[0]));
    void* compute_global_let = (&(global_workspace_19_var[128]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 8; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_5_let)[((((ax1_outer_ax0_outer_fused * 256) + (y_inner_outer_x_inner_outer_fused * 64)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_5_let)[cse_var_1]))) * (int64_t)1442237646) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_6(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  void* fused_nn_contrib_dense_pack_constant_6_let = (&(global_const_workspace_20_var[531968]));
  void* fused_constant_6_let = (&(global_const_workspace_20_var[393216]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_21_var[384]));
    void* compute_global_let = (&(global_workspace_21_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_6_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_6_let)[cse_var_1]))) * (int64_t)1315670694) + ((int64_t)1 << ((int64_t)((5 + 31) - 1)))) >> ((int64_t)(5 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_7(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_dense_pack_constant_7_let = (&(global_const_workspace_22_var[531456]));
  void* fused_constant_7_let = (&(global_const_workspace_22_var[360448]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_23_var[384]));
    void* compute_global_let = (&(global_workspace_23_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_7_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_7_let)[cse_var_1]))) * (int64_t)1994356843) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_8(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  void* fused_nn_contrib_dense_pack_constant_8_let = (&(global_const_workspace_24_var[530944]));
  void* fused_constant_8_let = (&(global_const_workspace_24_var[327680]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_25_var[384]));
    void* compute_global_let = (&(global_workspace_25_var[512]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 4; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_8_let)[((((ax1_outer_ax0_outer_fused * 4096) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 4; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 32) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_8_let)[cse_var_1]))) * (int64_t)1105921547) + ((int64_t)1 << ((int64_t)((6 + 31) - 1)))) >> ((int64_t)(6 + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_9(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_dense_pack_constant_9_let = (&(global_const_workspace_26_var[524288]));
  void* fused_constant_9_let = (&(global_const_workspace_26_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 5; ++ax1_outer_ax0_outer_fused) {
    void* compute_let = (&(global_workspace_27_var[0]));
    void* compute_global_let = (&(global_workspace_27_var[768]));
    for (int32_t y_inner_outer_x_inner_outer_fused = 0; y_inner_outer_x_inner_outer_fused < 16; ++y_inner_outer_x_inner_outer_fused) {
      for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
        ((int32_t*)compute_global_let)[x_c_init] = 0;
      }
      for (int32_t k_outer = 0; k_outer < 128; ++k_outer) {
        for (int32_t x_c = 0; x_c < 8; ++x_c) {
          ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_9_let)[((((ax1_outer_ax0_outer_fused * 16384) + (y_inner_outer_x_inner_outer_fused * 1024)) + (k_outer * 8)) + x_c)])));
        }
      }
      for (int32_t x_inner_inner = 0; x_inner_inner < 8; ++x_inner_inner) {
        ((int32_t*)compute_let)[((y_inner_outer_x_inner_outer_fused * 8) + x_inner_inner)] = ((int32_t*)compute_global_let)[x_inner_inner];
      }
    }
    for (int32_t ax1_inner_outer = 0; ax1_inner_outer < 16; ++ax1_inner_outer) {
      for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
        int32_t cse_var_2 = (ax1_inner_outer * 8);
        int32_t cse_var_1 = (((ax1_outer_ax0_outer_fused * 128) + cse_var_2) + ax1_inner_inner);
        int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let)[(cse_var_2 + ax1_inner_inner)] + ((int32_t*)fused_nn_contrib_dense_pack_constant_9_let)[cse_var_1]))) * (int64_t)1462485078) + ((int64_t)1 << ((int64_t)((9 + 31) - 1)))) >> ((int64_t)(9 + 31)))) + 96;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 40; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)89);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_1(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 8; ++ax1_outer) {
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
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_2(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  for (int32_t ax1_inner = 0; ax1_inner < 8; ++ax1_inner) {
    T_subtract[ax1_inner] = (((int16_t)p0[ax1_inner]) - (int16_t)-128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_buffer_var, int8_t* Identity_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_11_let = (&(global_workspace_1_var[160]));
  void* sid_9_let = (&(global_workspace_1_var[0]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[256]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[256]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_2_let = (&(global_workspace_1_var[1280]));
  void* sid_14_let = (&(global_workspace_1_var[256]));
  void* sid_4_let = (&(global_workspace_1_var[256]));
  void* sid_5_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[256]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  void* sid_16_let = (&(global_workspace_1_var[256]));
  void* sid_17_let = (&(global_workspace_1_var[0]));
  void* sid_18_let = (&(global_workspace_1_var[256]));
  void* sid_19_let = (&(global_workspace_1_var[512]));
  if (tvmgen_default_fused_reshape_cast_subtract(input_1_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_1(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_2(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_3(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_4(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_2(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_5(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_6(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_7(sid_15_let, sid_16_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_16_let, sid_17_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_8(sid_17_let, sid_18_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_18_let, sid_19_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_9(sid_19_let, Identity_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

