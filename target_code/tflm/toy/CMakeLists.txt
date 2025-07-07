project(tflm_toy)

add_executable_etiss(${PROJECT_NAME})


# Needed to run TensorFlow code with RISC-V toolchain

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

find_package(tflm REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC tflm::tflm)
target_include_directories(${PROJECT_NAME} PRIVATE ${TFLM_INCLUDE_DIRS})
