// tvm target: c -keys=cpu -constants-byte-alignment=4 -mcpu=generic-rv32 -model=etiss-rv32gc -workspace-byte-alignment=4
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_int8_buffer_var, int8_t* Identity_int8_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var);
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
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_9(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_10(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_11(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_12(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_13(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_14(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_15(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_16(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_17(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_18(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_19(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_20(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_21(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_22(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_23(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_24(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_25(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_26(int8_t*, int8_t*, int32_t*, int32_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_27(int8_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_28(int8_t*, int8_t*, int32_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_cmsis_nn_main_29(int8_t*, int8_t*, uint8_t*, uint8_t*);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* input_1_int8_buffer_var, int8_t* Identity_int8_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* constant_124_let = (&(global_const_workspace_0_var[242304]));
  void* constant_121_let = (&(global_const_workspace_0_var[243840]));
  void* constant_59_let = (&(global_const_workspace_0_var[256192]));
  void* constant_120_let = (&(global_const_workspace_0_var[147456]));
  void* constant_100_let = (&(global_const_workspace_0_var[252544]));
  void* constant_118_let = (&(global_const_workspace_0_var[244864]));
  void* constant_113_let = (&(global_const_workspace_0_var[246912]));
  void* constant_109_let = (&(global_const_workspace_0_var[248960]));
  void* constant_106_let = (&(global_const_workspace_0_var[249984]));
  void* constant_105_let = (&(global_const_workspace_0_var[250496]));
  void* constant_80_let = (&(global_const_workspace_0_var[229504]));
  void* constant_104_let = (&(global_const_workspace_0_var[251008]));
  void* constant_79_let = (&(global_const_workspace_0_var[230016]));
  void* constant_123_let = (&(global_const_workspace_0_var[242816]));
  void* constant_102_let = (&(global_const_workspace_0_var[202624]));
  void* constant_94_let = (&(global_const_workspace_0_var[223360]));
  void* constant_116_let = (&(global_const_workspace_0_var[245888]));
  void* constant_135_let = (&(global_const_workspace_0_var[237696]));
  void* constant_98_let = (&(global_const_workspace_0_var[221824]));
  void* constant_95_let = (&(global_const_workspace_0_var[222848]));
  void* constant_93_let = (&(global_const_workspace_0_var[223872]));
  void* constant_35_let = (&(global_const_workspace_0_var[260392]));
  void* constant_125_let = (&(global_const_workspace_0_var[241792]));
  void* constant_112_let = (&(global_const_workspace_0_var[247424]));
  void* constant_91_let = (&(global_const_workspace_0_var[224896]));
  void* constant_64_let = (&(global_const_workspace_0_var[255168]));
  void* constant_88_let = (&(global_const_workspace_0_var[225920]));
  void* constant_45_let = (&(global_const_workspace_0_var[259368]));
  void* constant_141_let = (&(global_const_workspace_0_var[235136]));
  void* constant_87_let = (&(global_const_workspace_0_var[226432]));
  void* constant_85_let = (&(global_const_workspace_0_var[227456]));
  void* constant_86_let = (&(global_const_workspace_0_var[226944]));
  void* constant_84_let = (&(global_const_workspace_0_var[114688]));
  void* constant_82_let = (&(global_const_workspace_0_var[228480]));
  void* constant_81_let = (&(global_const_workspace_0_var[228992]));
  void* constant_103_let = (&(global_const_workspace_0_var[251520]));
  void* constant_22_let = (&(global_const_workspace_0_var[261936]));
  void* constant_78_let = (&(global_const_workspace_0_var[198016]));
  void* constant_90_let = (&(global_const_workspace_0_var[196864]));
  void* constant_74_let = (&(global_const_workspace_0_var[232064]));
  void* constant_72_let = (&(global_const_workspace_0_var[180224]));
  void* constant_5_let = (&(global_const_workspace_0_var[262608]));
  void* constant_76_let = (&(global_const_workspace_0_var[231040]));
  void* constant_71_let = (&(global_const_workspace_0_var[253632]));
  void* constant_101_let = (&(global_const_workspace_0_var[252032]));
  void* constant_69_let = (&(global_const_workspace_0_var[254144]));
  void* constant_15_let = (&(global_const_workspace_0_var[262320]));
  void* constant_68_let = (&(global_const_workspace_0_var[254400]));
  void* constant_83_let = (&(global_const_workspace_0_var[227968]));
  void* constant_67_let = (&(global_const_workspace_0_var[254656]));
  void* constant_97_let = (&(global_const_workspace_0_var[222336]));
  void* constant_66_let = (&(global_const_workspace_0_var[220160]));
  void* constant_23_let = (&(global_const_workspace_0_var[261872]));
  void* constant_107_let = (&(global_const_workspace_0_var[249472]));
  void* constant_65_let = (&(global_const_workspace_0_var[254912]));
  void* constant_63_let = (&(global_const_workspace_0_var[255424]));
  void* constant_61_let = (&(global_const_workspace_0_var[255936]));
  void* constant_89_let = (&(global_const_workspace_0_var[225408]));
  void* constant_27_let = (&(global_const_workspace_0_var[261288]));
  void* constant_26_let = (&(global_const_workspace_0_var[261416]));
  void* constant_147_let = (&(global_const_workspace_0_var[217088]));
  void* constant_110_let = (&(global_const_workspace_0_var[248448]));
  void* constant_25_let = (&(global_const_workspace_0_var[261544]));
  void* constant_75_let = (&(global_const_workspace_0_var[231552]));
  void* constant_111_let = (&(global_const_workspace_0_var[247936]));
  void* constant_21_let = (&(global_const_workspace_0_var[262000]));
  void* constant_16_let = (&(global_const_workspace_0_var[262256]));
  void* constant_162_let = (&(global_const_workspace_0_var[233600]));
  void* constant_53_let = (&(global_const_workspace_0_var[257472]));
  void* constant_57_let = (&(global_const_workspace_0_var[256704]));
  void* constant_19_let = (&(global_const_workspace_0_var[262128]));
  void* constant_115_let = (&(global_const_workspace_0_var[246400]));
  void* constant_17_let = (&(global_const_workspace_0_var[262192]));
  void* constant_28_let = (&(global_const_workspace_0_var[261160]));
  void* constant_117_let = (&(global_const_workspace_0_var[245376]));
  void* constant_30_let = (&(global_const_workspace_0_var[253344]));
  void* constant_33_let = (&(global_const_workspace_0_var[260648]));
  void* constant_34_let = (&(global_const_workspace_0_var[260520]));
  void* constant_18_let = (&(global_const_workspace_0_var[258968]));
  void* constant_0_let = (&(global_const_workspace_0_var[258752]));
  void* constant_126_let = (&(global_const_workspace_0_var[200320]));
  void* constant_48_let = (&(global_const_workspace_0_var[194816]));
  void* constant_96_let = (&(global_const_workspace_0_var[98304]));
  void* constant_42_let = (&(global_const_workspace_0_var[253056]));
  void* constant_20_let = (&(global_const_workspace_0_var[262064]));
  void* constant_44_let = (&(global_const_workspace_0_var[259496]));
  void* constant_29_let = (&(global_const_workspace_0_var[261032]));
  void* constant_60_let = (&(global_const_workspace_0_var[188416]));
  void* constant_7_let = (&(global_const_workspace_0_var[262576]));
  void* constant_150_let = (&(global_const_workspace_0_var[192512]));
  void* constant_73_let = (&(global_const_workspace_0_var[232576]));
  void* constant_14_let = (&(global_const_workspace_0_var[262384]));
  void* constant_37_let = (&(global_const_workspace_0_var[260264]));
  void* constant_12_let = (&(global_const_workspace_0_var[261672]));
  void* constant_41_let = (&(global_const_workspace_0_var[259752]));
  void* constant_55_let = (&(global_const_workspace_0_var[257216]));
  void* constant_1_let = (&(global_const_workspace_0_var[262800]));
  void* constant_9_let = (&(global_const_workspace_0_var[262512]));
  void* constant_99_let = (&(global_const_workspace_0_var[221312]));
  void* constant_2_let = (&(global_const_workspace_0_var[262704]));
  void* constant_10_let = (&(global_const_workspace_0_var[262768]));
  void* constant_50_let = (&(global_const_workspace_0_var[258240]));
  void* constant_114_let = (&(global_const_workspace_0_var[201472]));
  void* constant_24_let = (&(global_const_workspace_0_var[233088]));
  void* constant_4_let = (&(global_const_workspace_0_var[262640]));
  void* constant_6_let = (&(global_const_workspace_0_var[261800]));
  void* constant_8_let = (&(global_const_workspace_0_var[262544]));
  void* constant_51_let = (&(global_const_workspace_0_var[257984]));
  void* constant_13_let = (&(global_const_workspace_0_var[262448]));
  void* constant_56_let = (&(global_const_workspace_0_var[256960]));
  void* constant_11_let = (&(global_const_workspace_0_var[262736]));
  void* constant_39_let = (&(global_const_workspace_0_var[260008]));
  void* constant_36_let = (&(global_const_workspace_0_var[203776]));
  void* constant_31_let = (&(global_const_workspace_0_var[260904]));
  void* constant_119_let = (&(global_const_workspace_0_var[244352]));
  void* constant_62_let = (&(global_const_workspace_0_var[255680]));
  void* constant_3_let = (&(global_const_workspace_0_var[262672]));
  void* constant_38_let = (&(global_const_workspace_0_var[260136]));
  void* constant_144_let = (&(global_const_workspace_0_var[65536]));
  void* constant_77_let = (&(global_const_workspace_0_var[230528]));
  void* constant_43_let = (&(global_const_workspace_0_var[259624]));
  void* constant_40_let = (&(global_const_workspace_0_var[259880]));
  void* constant_70_let = (&(global_const_workspace_0_var[253888]));
  void* constant_52_let = (&(global_const_workspace_0_var[257728]));
  void* constant_58_let = (&(global_const_workspace_0_var[256448]));
  void* constant_47_let = (&(global_const_workspace_0_var[259112]));
  void* constant_128_let = (&(global_const_workspace_0_var[240768]));
  void* constant_122_let = (&(global_const_workspace_0_var[243328]));
  void* constant_108_let = (&(global_const_workspace_0_var[163840]));
  void* constant_49_let = (&(global_const_workspace_0_var[258496]));
  void* constant_54_let = (&(global_const_workspace_0_var[220736]));
  void* constant_92_let = (&(global_const_workspace_0_var[224384]));
  void* constant_46_let = (&(global_const_workspace_0_var[259240]));
  void* constant_32_let = (&(global_const_workspace_0_var[260776]));
  void* constant_127_let = (&(global_const_workspace_0_var[241280]));
  void* constant_129_let = (&(global_const_workspace_0_var[240256]));
  void* constant_130_let = (&(global_const_workspace_0_var[239744]));
  void* constant_131_let = (&(global_const_workspace_0_var[239232]));
  void* constant_132_let = (&(global_const_workspace_0_var[131072]));
  void* constant_163_let = (&(global_const_workspace_0_var[262832]));
  void* constant_133_let = (&(global_const_workspace_0_var[238720]));
  void* constant_134_let = (&(global_const_workspace_0_var[238208]));
  void* constant_136_let = (&(global_const_workspace_0_var[237184]));
  void* constant_137_let = (&(global_const_workspace_0_var[236672]));
  void* constant_138_let = (&(global_const_workspace_0_var[199168]));
  void* constant_139_let = (&(global_const_workspace_0_var[236160]));
  void* constant_142_let = (&(global_const_workspace_0_var[234624]));
  void* constant_140_let = (&(global_const_workspace_0_var[235648]));
  void* constant_143_let = (&(global_const_workspace_0_var[234112]));
  void* constant_145_let = (&(global_const_workspace_0_var[219136]));
  void* constant_146_let = (&(global_const_workspace_0_var[218112]));
  void* constant_148_let = (&(global_const_workspace_0_var[216064]));
  void* constant_149_let = (&(global_const_workspace_0_var[215040]));
  void* constant_154_let = (&(global_const_workspace_0_var[210944]));
  void* constant_151_let = (&(global_const_workspace_0_var[214016]));
  void* constant_161_let = (&(global_const_workspace_0_var[204800]));
  void* constant_152_let = (&(global_const_workspace_0_var[212992]));
  void* constant_153_let = (&(global_const_workspace_0_var[211968]));
  void* constant_155_let = (&(global_const_workspace_0_var[209920]));
  void* constant_156_let = (&(global_const_workspace_0_var[0]));
  void* constant_157_let = (&(global_const_workspace_0_var[208896]));
  void* constant_158_let = (&(global_const_workspace_0_var[207872]));
  void* constant_159_let = (&(global_const_workspace_0_var[206848]));
  void* constant_160_let = (&(global_const_workspace_0_var[205824]));
  void* sid_126_let = (&(global_workspace_1_var[4608]));
  void* sid_112_let = (&(global_workspace_1_var[4608]));
  void* sid_84_let = (&(global_workspace_1_var[9216]));
  void* sid_140_let = (&(global_workspace_1_var[4608]));
  void* sid_91_let = (&(global_workspace_1_var[4608]));
  void* sid_21_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[36864]));
  void* sid_49_let = (&(global_workspace_1_var[0]));
  void* sid_28_let = (&(global_workspace_1_var[36864]));
  void* sid_77_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_70_let = (&(global_workspace_1_var[9216]));
  void* sid_98_let = (&(global_workspace_1_var[0]));
  void* sid_63_let = (&(global_workspace_1_var[0]));
  void* sid_42_let = (&(global_workspace_1_var[18432]));
  void* sid_105_let = (&(global_workspace_1_var[9216]));
  void* sid_35_let = (&(global_workspace_1_var[0]));
  void* sid_119_let = (&(global_workspace_1_var[0]));
  void* sid_56_let = (&(global_workspace_1_var[18432]));
  void* sid_133_let = (&(global_workspace_1_var[0]));
  void* sid_168_let = (&(global_workspace_1_var[9216]));
  void* sid_147_let = (&(global_workspace_1_var[0]));
  void* sid_154_let = (&(global_workspace_1_var[4608]));
  void* sid_161_let = (&(global_workspace_1_var[0]));
  void* sid_175_let = (&(global_workspace_1_var[6912]));
  void* sid_182_let = (&(global_workspace_1_var[4608]));
  void* sid_189_let = (&(global_workspace_1_var[0]));
  void* sid_190_let = (&(global_workspace_1_var[3328]));
  void* sid_193_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_cmsis_nn_main_0(input_1_int8_buffer_var, constant_0_let, constant_1_let, constant_3_let, constant_5_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_1(sid_7_let, constant_6_let, constant_7_let, constant_9_let, constant_11_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_2(sid_14_let, constant_12_let, constant_13_let, constant_15_let, constant_17_let, sid_21_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_3(sid_21_let, constant_18_let, constant_19_let, constant_21_let, constant_23_let, sid_28_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_4(sid_28_let, constant_24_let, constant_25_let, constant_27_let, constant_29_let, sid_35_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_5(sid_35_let, constant_30_let, constant_31_let, constant_33_let, constant_35_let, sid_42_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_6(sid_42_let, constant_36_let, constant_37_let, constant_39_let, constant_41_let, sid_49_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_7(sid_49_let, constant_42_let, constant_43_let, constant_45_let, constant_47_let, sid_56_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_8(sid_56_let, constant_48_let, constant_49_let, constant_51_let, constant_53_let, sid_63_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_9(sid_63_let, constant_54_let, constant_55_let, constant_57_let, constant_59_let, sid_70_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_10(sid_70_let, constant_60_let, constant_61_let, constant_63_let, constant_65_let, sid_77_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_11(sid_77_let, constant_66_let, constant_67_let, constant_69_let, constant_71_let, sid_84_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_12(sid_84_let, constant_72_let, constant_73_let, constant_75_let, constant_77_let, sid_91_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_13(sid_91_let, constant_78_let, constant_79_let, constant_81_let, constant_83_let, sid_98_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_14(sid_98_let, constant_84_let, constant_85_let, constant_87_let, constant_89_let, sid_105_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_15(sid_105_let, constant_90_let, constant_91_let, constant_93_let, constant_95_let, sid_112_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_16(sid_112_let, constant_96_let, constant_97_let, constant_99_let, constant_101_let, sid_119_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_17(sid_119_let, constant_102_let, constant_103_let, constant_105_let, constant_107_let, sid_126_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_18(sid_126_let, constant_108_let, constant_109_let, constant_111_let, constant_113_let, sid_133_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_19(sid_133_let, constant_114_let, constant_115_let, constant_117_let, constant_119_let, sid_140_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_20(sid_140_let, constant_120_let, constant_121_let, constant_123_let, constant_125_let, sid_147_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_21(sid_147_let, constant_126_let, constant_127_let, constant_129_let, constant_131_let, sid_154_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_22(sid_154_let, constant_132_let, constant_133_let, constant_135_let, constant_137_let, sid_161_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_23(sid_161_let, constant_138_let, constant_139_let, constant_141_let, constant_143_let, sid_168_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_24(sid_168_let, constant_144_let, constant_145_let, constant_147_let, constant_149_let, sid_175_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_25(sid_175_let, constant_150_let, constant_151_let, constant_153_let, constant_155_let, sid_182_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_26(sid_182_let, constant_156_let, constant_157_let, constant_159_let, constant_161_let, sid_189_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_27(sid_189_let, sid_190_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_28(sid_190_let, constant_162_let, constant_163_let, sid_193_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_cmsis_nn_main_29(sid_193_let, Identity_int8_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

