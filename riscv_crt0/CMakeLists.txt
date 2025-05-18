cmake_minimum_required(VERSION 3.10)

project(riscv_crt0 C CXX ASM)

if(NOT DEFINED SIMULATION_RUNS_COUNT)
    set(SIMULATION_RUNS_COUNT 1)
endif()

message(STATUS "SIMULATION_RUNS_COUNT is set to: ${SIMULATION_RUNS_COUNT}")

add_library(etiss_crt0 STATIC crt0.S fixes.c trap_handler.c)

target_compile_definitions(etiss_crt0 PRIVATE SIMULATION_RUNS=${SIMULATION_RUNS_COUNT})
