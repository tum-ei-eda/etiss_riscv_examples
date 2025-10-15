cmake_minimum_required(VERSION 3.14)

set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(riscv_examples LANGUAGES ASM C CXX)

set(MEM_ROM_ORIGIN 0x10000000)
set(MEM_ROM_LENGTH 0x00400000)
set(MEM_RAM_ORIGIN 0x20000000)
set(MEM_RAM_LENGTH 0x00100000)

set(MIN_STACK_SIZE 0x1000)
set(MIN_HEAP_SIZE 0x1000)

configure_file(etiss.ld.in etiss.ld @ONLY)
configure_file(memsegs.ini.in memsegs.ini @ONLY)

set(ETISS_LDSCRIPT ${CMAKE_CURRENT_BINARY_DIR}/etiss.ld)
add_subdirectory(riscv_crt0)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${ETISS_LDFLAGS}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

option(ENABLE_TESTS "Enable tests" ON)
option(ENABLE_DUMP "Enable tests" OFF)
if(${ENABLE_TESTS})
  enable_testing()
  macro(add_etiss_test TEST_NAME ELF_PATH INI_PATH)

      add_test(NAME ${TEST_NAME}
      COMMAND ${CMAKE_COMMAND}
              -DPROG=${ELF_PATH}
              -DCFG=${INI_PATH}
              -P ${CMAKE_SOURCE_DIR}/cmake/run_etiss_test.cmake)
      set_tests_properties(${TEST_NAME} PROPERTIES TIMEOUT 240)
      set_tests_properties(${TEST_NAME} PROPERTIES SKIP_RETURN_CODE 77)
      set_property(TEST ${TEST_NAME} PROPERTY
          SKIP_REGULAR_EXPRESSION "[^a-z]Skip" "SKIP" "Skipped" "Skipping"
      )

      if(${ENABLE_DUMP})
          # Create assembly dump from binary file
          add_custom_command(TARGET ${TEST_NAME} POST_BUILD
              COMMAND ${CMAKE_OBJDUMP} -S "$<TARGET_FILE:${TEST_NAME}>" # or just -d
                                          > "$<TARGET_FILE:${TEST_NAME}>.lst"
              VERBATIM)
      endif()

      message(STATUS "Successfully added ${TEST_NAME}")

  endmacro()
endif()

set(ETISS_ELFINI ${CMAKE_CURRENT_SOURCE_DIR}/elffile.ini.in)
add_subdirectory(target_code)
