macro(add_executable_etiss TARGET)
	set(SRC_FILES "${ARGN}")

	add_executable(${TARGET} ${SRC_FILES})
	add_dependencies(${TARGET} etiss_crt0)
	target_include_directories(${TARGET} PRIVATE ${CMAKE_SOURCE_DIR}/riscv_crt0)
	set(BIN_NAME ${TARGET})

	configure_file(${ETISS_ELFINI} ${TARGET}.ini @ONLY)

	install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.ini DESTINATION ini)
	install(TARGETS ${TARGET} DESTINATION bin)
endmacro()

add_subdirectory(hello_world)
add_subdirectory(test_cases)
add_subdirectory(interactive)
add_subdirectory(semihosting_cpp)
add_subdirectory(cpp)
add_subdirectory(c)
add_subdirectory(dhry)
