project(tvm_toy_muriscvnn)

add_executable_etiss(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/runtime/include
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/include
)

target_sources(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib0.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib1.c
  ${CMAKE_CURRENT_SOURCE_DIR}/mlf/codegen/host/src/default_lib2.c
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_input_data.h
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_settings.h
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_output_data_ref.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_output_data_ref.h
)

target_link_libraries(${PROJECT_NAME} PRIVATE m)

set(MURISCVNN_DIR ${CMAKE_CURRENT_LIST_DIR}/../../../3rdparty/muriscv-nn)
# set(CMAKE_MODULE_PATH ${MURISCVNN_DIR}/CMake)
# set(CMAKE_MODULE_PATH ${MURISCVNN_DIR}/CMake)
set(muriscvnn_DIR ${MURISCVNN_DIR}/CMake)
message(STATUS "CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")
find_package(muriscvnn REQUIRED)


find_package(muriscvnn REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC muriscvnn::muriscvnn)
target_include_directories(${PROJECT_NAME} PRIVATE ${MURISCVNN_INCLUDE_DIRS})
