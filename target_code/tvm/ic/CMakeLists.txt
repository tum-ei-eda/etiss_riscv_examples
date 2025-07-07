add_executable_etiss(tvm_ic)

target_include_directories(tvm_ic PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/runtime/include
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/include
)

target_sources(tvm_ic PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib0.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib1.c
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_input_data.h
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_model_settings.h
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_output_data_ref.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/ic_data/ic_output_data_ref.h
)

target_link_libraries(tvm_ic PRIVATE m)
