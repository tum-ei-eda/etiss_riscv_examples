cmake_minimum_required(VERSION 3.10)


set(RISCV_ARCH "rv32gc" CACHE STRING "RISC-V architecture (-march)")
set(RISCV_ABI "ilp32d" CACHE STRING "RISC-V ABI (-mabi)")

set(RISCV_TOOLCHAIN_PREFIX "" CACHE STRING "optional prefix for the riscv toolchain in case it is not on the path")
set(RISCV_TOOLCHAIN_BASENAME "riscv64-unknown-elf" CACHE STRING "base name of the toolchain executables")

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_ASM_COMPILER clang)

set(CMAKE_OBJCOPY llvm-objcopy)
set(CMAKE_OBJDUMP llvm-objdump)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__riscv__ -march=${RISCV_ARCH} -mabi=${RISCV_ABI} --target=riscv32")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --gcc-toolchain=${RISCV_TOOLCHAIN_PREFIX} --sysroot=${RISCV_TOOLCHAIN_PREFIX}/${RISCV_TOOLCHAIN_BASENAME}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__riscv__ -march=${RISCV_ARCH} -mabi=${RISCV_ABI} --target=riscv32")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --gcc-toolchain=${RISCV_TOOLCHAIN_PREFIX} --sysroot=${RISCV_TOOLCHAIN_PREFIX}/${RISCV_TOOLCHAIN_BASENAME}")
set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} -D__riscv__ -march=${RISCV_ARCH} -mabi=${RISCV_ABI} --target=riscv32")
set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} --gcc-toolchain=${RISCV_TOOLCHAIN_PREFIX} --sysroot=${RISCV_TOOLCHAIN_PREFIX}/${RISCV_TOOLCHAIN_BASENAME}")
set(CMAKE_EXE_LINKER_FLAGS "-march=${RISCV_ARCH} -mabi=${RISCV_ABI} -fuse-ld=lld")


set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR ${RISCV_ARCH})

SET(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
