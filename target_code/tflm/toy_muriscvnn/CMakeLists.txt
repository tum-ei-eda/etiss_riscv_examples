project(tflm_toy_muriscvnn)

add_executable_etiss(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/toy_data/toy_output_data_ref.cc
)

target_link_libraries(${PROJECT_NAME} PRIVATE m)

find_package(tflm_muriscvnn REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC tflm_muriscvnn::tflm_muriscvnn)
target_include_directories(${PROJECT_NAME} PRIVATE ${TFLM_MURISCVNN_INCLUDE_DIRS})

target_compile_definitions(${PROJECT_NAME} PRIVATE
  -DTF_LITE_USE_GLOBAL_MAX
  -DTF_LITE_USE_GLOBAL_MIN
  -DTF_LITE_USE_GLOBAL_CMATH_FUNCTIONS
  -DTF_LITE_STATIC_MEMORY
  -DTFLITE_EMULATE_FLOAT
  -DTF_LITE_STRIP_ERROR_STRINGS
)
