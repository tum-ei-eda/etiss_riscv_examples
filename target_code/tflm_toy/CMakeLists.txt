add_executable_etiss(tflm_toy)

set(TFLM_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_library(tflm STATIC)

# Needed to run TensorFlow code with RISC-V toolchain
add_definitions(-DTF_LITE_USE_GLOBAL_MAX)
add_definitions(-DTF_LITE_USE_GLOBAL_MIN)
add_definitions(-DTF_LITE_USE_GLOBAL_CMATH_FUNCTIONS)
add_definitions(-DTF_LITE_STATIC_MEMORY)
add_definitions(-DTFLITE_EMULATE_FLOAT)
add_definitions(-DTF_LITE_STRIP_ERROR_STRINGS)

set(TFLM_SRCS
  ${TFLM_DIR}/tensorflow/lite/core/c/common.cc
  # ${TFLM_DIR}/tensorflow/lite/c/common.c
  ${TFLM_DIR}/tensorflow/lite/schema/schema_utils.cc
  ${TFLM_DIR}/tensorflow/lite/micro/memory_planner/linear_memory_planner.cc
  ${TFLM_DIR}/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cc
  ${TFLM_DIR}/tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_log.cc
  ${TFLM_DIR}/tensorflow/lite/micro/memory_helpers.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/mock_micro_graph.cc
  ${TFLM_DIR}/tensorflow/lite/micro/system_setup.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/fake_micro_context.cc
  ${TFLM_DIR}/tensorflow/lite/micro/test_helpers.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_resource_variable.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_context.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_profiler.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_utils.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_allocation_info.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/micro_string.cc
  ${TFLM_DIR}/tensorflow/lite/micro/flatbuffer_utils.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/micro_error_reporter.cc
  ${TFLM_DIR}/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.cc
  ${TFLM_DIR}/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.cc
  ${TFLM_DIR}/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.cc
  ${TFLM_DIR}/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/micro_graph.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/all_ops_resolver.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_allocator.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_interpreter.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_interpreter_graph.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_interpreter_context.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_time.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/recording_micro_allocator.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/fully_connected.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/mul.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/add.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/svdf.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/conv.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/depthwise_conv.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/pooling.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/softmax.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/hard_swish.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/add_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/dequantize.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/concatenation.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/space_to_batch_nd.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/pack.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/broadcast_args.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/maximum_minimum.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/mul_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/quantize.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/hard_swish_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/softmax_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/cumsum.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/pad.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/floor.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/split_v.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/svdf_common.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/internal/common.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/internal/tensor_ctypes.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/shape.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/batch_to_space_nd.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/kernel_runner.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/leaky_relu.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/logistic.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/unidirectional_sequence_lstm.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/floor_div.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/ceil.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/strided_slice.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/depthwise_conv_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/pooling_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/kernel_util.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/assign_variable.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/sub_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/reduce.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/unpack.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/ethosu.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/activations_common.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/squared_difference.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/l2norm.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/l2_pool_2d.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/round.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/tanh.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/add_n.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/dequantize_common.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/broadcast_to.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/circular_buffer.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/space_to_depth.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/quantize_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/logical.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/split.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/if.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/expand_dims.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/logical_common.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/lstm_eval.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/sub.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/prelu_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/slice.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/gather.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/squeeze.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/floor_mod.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/depth_to_space.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/fully_connected_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/gather_nd.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/reduce_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/conv_common.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/mirror_pad.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/micro_tensor_utils.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/activations.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/fill.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/resize_bilinear.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/call_once.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/prelu.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/reshape.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/zeros_like.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/neg.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/elementwise.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/read_variable.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/div.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/kernels/while.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/exp.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/detection_postprocess.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/circular_buffer_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/leaky_relu_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/arg_min_max.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/comparisons.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/log_softmax.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/cast.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/transpose_conv.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/elu.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/var_handle.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/transpose.cc
  ${TFLM_DIR}/tensorflow/lite/micro/kernels/logistic_common.cc
  ${TFLM_DIR}/tensorflow/lite/micro/debug_log.cc
  ${TFLM_DIR}/tensorflow/lite/micro/micro_op_resolver.cc
  # ${TFLM_DIR}/tensorflow/lite/micro/test_helper_custom_ops.cc
  ${TFLM_DIR}/tensorflow/lite/core/api/error_reporter.cc
  # ${TFLM_DIR}/tensorflow/lite/core/api/op_resolver.cc
  ${TFLM_DIR}/tensorflow/lite/core/api/flatbuffer_conversions.cc
  ${TFLM_DIR}/tensorflow/lite/core/api/tensor_utils.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/kernel_util.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/internal/quantization_util.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/internal/reference/portable_tensor_utils.cc
  ${TFLM_DIR}/tensorflow/lite/kernels/internal/portable_tensor_utils.cc
  ${TFLM_DIR}/tensorflow/lite/micro/tflite_bridge/flatbuffer_conversions_bridge.cc
  ${TFLM_DIR}/tensorflow/lite/micro/tflite_bridge/micro_error_reporter.cc
)

set(TFLM_THIRD_PARTY_SRCS
  ${TFLM_DIR}/third_party/kissfft/tools/kiss_fftr.c
  ${TFLM_DIR}/third_party/kissfft/kiss_fft.c
)

target_sources(tflm PRIVATE
  ${TFLM_SRCS}
  ${TFLM_THIRD_PARTY_SRCS}
)

target_include_directories(tflm PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/ruy
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/gemmlowp
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/kissfft
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/flatbuffers
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/flatbuffers/include
  ${CMAKE_SOURCE_DIR}/Include
  ${CMAKE_SOURCE_DIR}/Include/CMSIS/NN/Include
)


target_include_directories(tflm_toy PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(tflm_toy PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_output_data_ref.cc
)

target_link_libraries(tflm_toy PRIVATE tflm)
target_link_libraries(tflm_toy PRIVATE m)
target_link_libraries(tflm_toy PRIVATE c)
target_link_libraries(tflm_toy PRIVATE gcc)
