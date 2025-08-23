# Findtflm.cmake

if(POLICY CMP0079)
  cmake_policy(SET CMP0079 NEW)
endif()

# Allow user to predefine the path
if(NOT DEFINED tflm_ROOT)
  set(tflm_ROOT "${CMAKE_CURRENT_LIST_DIR}/../3rdparty/tflm/")
endif()

set(TFLM_SRCS
  ${tflm_ROOT}/tensorflow/lite/core/c/common.cc
  # ${tflm_ROOT}/tensorflow/lite/c/common.c
  ${tflm_ROOT}/tensorflow/compiler/mlir/lite/schema/schema_utils.cc
  ${tflm_ROOT}/tensorflow/lite/micro/memory_planner/linear_memory_planner.cc
  ${tflm_ROOT}/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cc
  ${tflm_ROOT}/tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_log.cc
  ${tflm_ROOT}/tensorflow/lite/micro/memory_helpers.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/mock_micro_graph.cc
  ${tflm_ROOT}/tensorflow/lite/micro/system_setup.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/fake_micro_context.cc
  ${tflm_ROOT}/tensorflow/lite/micro/test_helpers.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_resource_variable.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_context.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_profiler.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_utils.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_allocation_info.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/micro_string.cc
  ${tflm_ROOT}/tensorflow/lite/micro/flatbuffer_utils.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/micro_error_reporter.cc
  ${tflm_ROOT}/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.cc
  ${tflm_ROOT}/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.cc
  ${tflm_ROOT}/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.cc
  ${tflm_ROOT}/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/micro_graph.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/all_ops_resolver.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_allocator.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_interpreter.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_interpreter_graph.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_interpreter_context.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_time.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/recording_micro_allocator.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/fully_connected.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/mul.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/add.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/svdf.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/conv.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/depthwise_conv.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/pooling.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/softmax.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/hard_swish.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/add_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/dequantize.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/concatenation.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/space_to_batch_nd.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/pack.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/broadcast_args.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/maximum_minimum.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/mul_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/quantize.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/hard_swish_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/softmax_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/cumsum.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/pad.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/floor.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/split_v.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/svdf_common.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/internal/common.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/internal/tensor_ctypes.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/shape.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/batch_to_space_nd.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/kernel_runner.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/leaky_relu.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/logistic.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/unidirectional_sequence_lstm.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/floor_div.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/ceil.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/strided_slice.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/depthwise_conv_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/pooling_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/kernel_util.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/assign_variable.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/sub_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/reduce.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/unpack.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/ethosu.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/activations_common.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/squared_difference.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/l2norm.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/l2_pool_2d.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/round.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/tanh.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/add_n.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/dequantize_common.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/broadcast_to.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/circular_buffer.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/space_to_depth.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/quantize_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/logical.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/split.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/if.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/expand_dims.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/logical_common.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/lstm_eval.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/sub.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/prelu_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/slice.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/gather.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/squeeze.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/floor_mod.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/depth_to_space.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/fully_connected_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/gather_nd.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/reduce_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/conv_common.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/mirror_pad.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/micro_tensor_utils.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/activations.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/fill.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/resize_bilinear.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/call_once.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/prelu.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/reshape.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/reshape_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/zeros_like.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/neg.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/elementwise.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/read_variable.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/div.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/kernels/while.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/exp.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/detection_postprocess.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/circular_buffer_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/leaky_relu_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/arg_min_max.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/comparisons.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/log_softmax.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/cast.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/transpose_conv.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/elu.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/var_handle.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/transpose.cc
  ${tflm_ROOT}/tensorflow/lite/micro/kernels/logistic_common.cc
  ${tflm_ROOT}/tensorflow/lite/micro/debug_log.cc
  ${tflm_ROOT}/tensorflow/lite/micro/micro_op_resolver.cc
  # ${tflm_ROOT}/tensorflow/lite/micro/test_helper_custom_ops.cc
  ${tflm_ROOT}/tensorflow/lite/core/api/error_reporter.cc
  # ${tflm_ROOT}/tensorflow/lite/core/api/op_resolver.cc
  ${tflm_ROOT}/tensorflow/lite/core/api/flatbuffer_conversions.cc
  ${tflm_ROOT}/tensorflow/lite/core/api/tensor_utils.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/kernel_util.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/internal/quantization_util.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/internal/reference/portable_tensor_utils.cc
  ${tflm_ROOT}/tensorflow/lite/kernels/internal/portable_tensor_utils.cc
  ${tflm_ROOT}/tensorflow/lite/micro/tflite_bridge/flatbuffer_conversions_bridge.cc
  ${tflm_ROOT}/tensorflow/lite/micro/tflite_bridge/micro_error_reporter.cc
)

set(TFLM_THIRD_PARTY_SRCS
  ${tflm_ROOT}/third_party/kissfft/tools/kiss_fftr.c
  ${tflm_ROOT}/third_party/kissfft/kiss_fft.c
)


if(NOT TARGET tflm::tflm)
  add_library(tflm STATIC)

  target_sources(tflm PRIVATE
    ${TFLM_SRCS}
    ${TFLM_THIRD_PARTY_SRCS}
  )

  target_include_directories(tflm PUBLIC
    ${tflm_ROOT}/
    ${tflm_ROOT}/third_party/ruy
    ${tflm_ROOT}/third_party/gemmlowp
    ${tflm_ROOT}/third_party/kissfft
    ${tflm_ROOT}/third_party/flatbuffers
    ${tflm_ROOT}/third_party/flatbuffers/include
  )

  target_link_libraries(tflm PUBLIC m)
  target_compile_definitions(tflm PRIVATE
    -DTF_LITE_USE_GLOBAL_MAX
    -DTF_LITE_USE_GLOBAL_MIN
    -DTF_LITE_USE_GLOBAL_CMATH_FUNCTIONS
    -DTF_LITE_STATIC_MEMORY
    -DTFLITE_EMULATE_FLOAT
    -DTF_LITE_STRIP_ERROR_STRINGS
  )
  target_compile_options(tflm PRIVATE
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti> -fno-exceptions
  )

  add_library(tflm::tflm ALIAS tflm)
endif()

set(TFLM_INCLUDE_DIRS
  "${muriscvnn_ROOT}/Include"
  "${muriscvnn_ROOT}/Include/CMSIS/NN/Include"
  "${muriscvnn_ROOT}/Include/CMSIS/NN"
)

set(tflm_FOUND TRUE)
