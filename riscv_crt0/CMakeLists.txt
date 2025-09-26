cmake_minimum_required(VERSION 3.10)

project(riscv_crt0 C CXX ASM)

if(NOT DEFINED SIMULATION_RUNS_COUNT)
    set(SIMULATION_RUNS_COUNT 1)
endif()

message(STATUS "SIMULATION_RUNS_COUNT is set to: ${SIMULATION_RUNS_COUNT}")

add_library(etiss_crt0 STATIC crt0.S fixes.c trap_handler.c)

target_compile_definitions(etiss_crt0 PRIVATE SIMULATION_RUNS=${SIMULATION_RUNS_COUNT})

option(USE_SYS_EXIT_EXTENDED "Override _exit syscall to support return values on 32-bit targets." ON)  # TODO: detect automatically if supported by ETISS
if(USE_SYS_EXIT_EXTENDED)
    target_compile_definitions(etiss_crt0 PRIVATE -DUSE_SYS_EXIT_EXTENDED)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "(C|c?)lang")
	set(ETISS_LDFLAGS "-nostdlib -lc -lsemihost -lgcc -lstdc++ -L${CMAKE_CURRENT_BINARY_DIR} -T ${ETISS_LDSCRIPT}")
else()
	set(ETISS_LDFLAGS "-L${CMAKE_CURRENT_BINARY_DIR} --specs=${CMAKE_CURRENT_SOURCE_DIR}/etiss-semihost.specs -T ${ETISS_LDSCRIPT}")
endif()
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${ETISS_LDFLAGS}")
