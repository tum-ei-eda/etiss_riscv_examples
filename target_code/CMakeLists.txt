macro(add_executable_etiss TARGET)
	set(SRC_FILES "${ARGN}")

	add_executable(${TARGET} ${SRC_FILES})
	add_dependencies(${TARGET} etiss_crt0)
	target_link_libraries(${TARGET} PRIVATE etiss_crt0)
	target_include_directories(${TARGET} PRIVATE ${CMAKE_SOURCE_DIR}/riscv_crt0)
	set(BIN_NAME ${TARGET})

	configure_file(${ETISS_ELFINI} ${TARGET}.ini @ONLY)

	# Build dir variant
	set(ELF_PATH "${CMAKE_CURRENT_BINARY_DIR}/${TARGET}")
	set(INI_BUILD ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.ini)
	configure_file(${ETISS_ELFINI} ${INI_BUILD} @ONLY)
	add_etiss_test(${TARGET} ${ELF_PATH} ${INI_BUILD})

	# Install dir variant
	set(ELF_PATH "${CMAKE_INSTALL_PREFIX}/bin/${BIN_NAME}")
	set(INI_INSTALL ${CMAKE_CURRENT_BINARY_DIR}/temp/${TARGET}.ini)
	configure_file(${ETISS_ELFINI} ${INI_INSTALL} @ONLY)

	install(FILES ${INI_INSTALL} DESTINATION ini OPTIONAL)
	install(TARGETS ${TARGET} DESTINATION bin OPTIONAL)
endmacro()

option(EMBENCH "EMBENCH" ON)
option(MURISCVNN "MURISCVNN" ON)
option(TVM "MURISCVNN" ON)
option(TFLM "MURISCVNN" ON)

add_subdirectory(hello_world)
add_subdirectory(test_cases)
add_subdirectory(interactive)
add_subdirectory(semihosting_cpp)
add_subdirectory(cpp)
add_subdirectory(c)
add_subdirectory(dhry)
if(TVM)
	add_subdirectory(tvm)
endif()
if(TFLM)
	add_subdirectory(tflm)
endif()
if(EMBENCH)
	add_subdirectory(embench)
endif()
