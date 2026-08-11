cmake_minimum_required(VERSION 3.10)

project(riscv_crt0 C CXX ASM)

if(NOT DEFINED SIMULATION_RUNS_COUNT)
    set(SIMULATION_RUNS_COUNT 1)
endif()

message(STATUS "SIMULATION_RUNS_COUNT is set to: ${SIMULATION_RUNS_COUNT}")

# add_library(etiss_crt0 STATIC crt0.S fixes.c trap_handler.c)
add_library(bsp STATIC dummy.c)
add_library(etiss_crt0 STATIC crt0.S trap_handler.c)


target_include_directories(etiss_crt0 PRIVATE .)
target_compile_definitions(etiss_crt0 PRIVATE SIMULATION_RUNS=${SIMULATION_RUNS_COUNT})


if(CMAKE_CXX_COMPILER_ID MATCHES "(C|c?)lang")
	set(ETISS_LDFLAGS "-nostdlib -lc -lsemihost -lgcc -lstdc++ -L${CMAKE_CURRENT_BINARY_DIR} -T ${ETISS_LDSCRIPT}" CACHE INTERNAL "")
else()
	set(ETISS_LDFLAGS "--specs=semihost.specs" CACHE INTERNAL "")
endif()

SET(WRAP_ARGS "LINKER:--wrap=exit")
add_library(wrap STATIC fixes.c)
target_link_options(wrap INTERFACE ${WRAP_ARGS})

target_link_libraries(bsp PUBLIC etiss_crt0 wrap)

target_link_options(bsp INTERFACE LINKER: -nostartfiles -T ${ETISS_LDSCRIPT})

option(USE_SYS_EXIT_EXTENDED "Override _exit syscall to support return values on 32-bit targets." ON)
if(USE_SYS_EXIT_EXTENDED)
    target_compile_definitions(wrap PRIVATE -DUSE_SYS_EXIT_EXTENDED)
endif()
