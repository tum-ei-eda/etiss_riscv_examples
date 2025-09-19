project(tvm_vww)

add_executable_etiss(${PROJECT_NAME})

set(MLF_DIR ${CMAKE_CURRENT_SOURCE_DIR}/mlf)

if(DEFINED MIN_RUNS)
	target_compile_definitions(${PROJECT_NAME} PRIVATE -DMIN_RUNS=${MIN_RUNS})
endif()

if(DEFINED MAX_RUNS)
	target_compile_definitions(${PROJECT_NAME} PRIVATE -DMAX_RUNS=${MAX_RUNS})
endif()

if(CHECK)
	target_compile_definitions(${PROJECT_NAME} PRIVATE -DCHECK=1)
else()
	target_compile_definitions(${PROJECT_NAME} PRIVATE -DCHECK=0)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${MLF_DIR}/runtime/include
  ${MLF_DIR}/codegen/host/include
)

target_sources(${PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/main.c
  ${MLF_DIR}/codegen/host/src/default_lib0.c
  ${MLF_DIR}/codegen/host/src/default_lib1.c
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_input_data.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_input_data.h
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_model_settings.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_model_settings.h
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_output_data_ref.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/vww_data/vww_output_data_ref.h
)

target_link_libraries(${PROJECT_NAME} PRIVATE m)
target_compile_options(${PROJECT_NAME} PRIVATE -Wno-incompatible-pointer-types)
