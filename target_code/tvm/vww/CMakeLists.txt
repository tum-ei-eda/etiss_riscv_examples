add_executable_etiss(tvm_vww)

target_include_directories(tvm_vww PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/runtime/include
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/include
)

target_sources(tvm_vww PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib0.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib1.c
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_input_data.h
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_model_settings.h
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_output_data_ref.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_output_data_ref.h
)

target_link_libraries(tvm_vww PRIVATE m)
