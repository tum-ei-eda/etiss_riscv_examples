cmake_minimum_required(VERSION 3.10)

set(CMAKE_TRY_COMPILE_PLATFORM_VARIABLES
    RISCV_ARCH
    RISCV_ABI
    RISCV_TOOLCHAIN_PREFIX
    RISCV_TOOLCHAIN_BASENAME
)

# ------------------------------------------------------------------------------
# Target configuration
# ------------------------------------------------------------------------------

set(RISCV_ARCH "rv64gc"
    CACHE STRING "RISC-V architecture passed to -march")

set(RISCV_ABI "lp64d"
    CACHE STRING "RISC-V ABI passed to -mabi")



# ------------------------------------------------------------------------------
# GNU RISC-V toolchain
#
# Example:
#
#   RISCV_TOOLCHAIN_PREFIX=/work/git/m2isar/m2isar_new/install
#
# gives:
#
#   /work/git/m2isar/m2isar_new/install/bin/riscv64-unknown-elf-gcc
#   /work/git/m2isar/m2isar_new/install/riscv64-unknown-elf/include
#   /work/git/m2isar/m2isar_new/install/lib/gcc/riscv64-unknown-elf/...
# ------------------------------------------------------------------------------

set(RISCV_TOOLCHAIN_PREFIX ""
    CACHE PATH "Installation prefix of the GNU RISC-V toolchain")

set(RISCV_TOOLCHAIN_BASENAME "riscv64-unknown-elf"
    CACHE STRING "GNU RISC-V toolchain target triple")


if(NOT RISCV_TOOLCHAIN_PREFIX)
    message(FATAL_ERROR
        "RISCV_TOOLCHAIN_PREFIX must point to the GNU RISC-V toolchain "
        "installation prefix")
endif()

set(RISCV_TOOLCHAIN_BIN_DIR
    "${RISCV_TOOLCHAIN_PREFIX}/bin")

set(RISCV_TOOLCHAIN_SYSROOT
    "${RISCV_TOOLCHAIN_PREFIX}/${RISCV_TOOLCHAIN_BASENAME}")

# ------------------------------------------------------------------------------
# Tool paths
# ------------------------------------------------------------------------------

set(RISCV_GCC
    "${RISCV_TOOLCHAIN_BIN_DIR}/${RISCV_TOOLCHAIN_BASENAME}-gcc")

set(RISCV_GXX
    "${RISCV_TOOLCHAIN_BIN_DIR}/${RISCV_TOOLCHAIN_BASENAME}-g++")

set(RISCV_OBJCOPY
    "${RISCV_TOOLCHAIN_BIN_DIR}/${RISCV_TOOLCHAIN_BASENAME}-objcopy")

set(RISCV_OBJDUMP
    "${RISCV_TOOLCHAIN_BIN_DIR}/${RISCV_TOOLCHAIN_BASENAME}-objdump")

# Sanity checks.

foreach(_tool
        RISCV_GCC
        RISCV_GXX
        RISCV_OBJCOPY
        RISCV_OBJDUMP)
    if(NOT EXISTS "${${_tool}}")
        message(FATAL_ERROR
            "Required RISC-V tool not found: ${${_tool}}")
    endif()
endforeach()

if(NOT EXISTS "${RISCV_TOOLCHAIN_SYSROOT}")
    message(FATAL_ERROR
        "RISC-V sysroot does not exist: ${RISCV_TOOLCHAIN_SYSROOT}")
endif()

# ------------------------------------------------------------------------------
# CMake compilers/tools
# ------------------------------------------------------------------------------

set(CMAKE_C_COMPILER
    "${RISCV_GCC}"
    CACHE FILEPATH "RISC-V C compiler" FORCE)

set(CMAKE_CXX_COMPILER
    "${RISCV_GXX}"
    CACHE FILEPATH "RISC-V C++ compiler" FORCE)

set(CMAKE_ASM_COMPILER
    "${RISCV_GCC}"
    CACHE FILEPATH "RISC-V ASM compiler" FORCE)

set(CMAKE_OBJCOPY
    "${RISCV_OBJCOPY}"
    CACHE FILEPATH "RISC-V objcopy" FORCE)

set(CMAKE_OBJDUMP
    "${RISCV_OBJDUMP}"
    CACHE FILEPATH "RISC-V objdump" FORCE)


# ------------------------------------------------------------------------------
# Determine XLEN from -march
#
# rv32... -> 32
# rv64... -> 64
# ------------------------------------------------------------------------------

if(RISCV_ARCH MATCHES "^rv(32|64)")
    set(RISCV_XLEN "${CMAKE_MATCH_1}")
else()
    message(FATAL_ERROR
        "Cannot determine RISC-V XLEN from RISCV_ARCH='${RISCV_ARCH}'. "
        "Expected architecture starting with rv32 or rv64.")
endif()


# ------------------------------------------------------------------------------
# CMake cross-compilation configuration
# ------------------------------------------------------------------------------

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR "riscv${RISCV_XLEN}")

# Let CMake pass --sysroot itself.
set(CMAKE_SYSROOT "${RISCV_TOOLCHAIN_SYSROOT}")

# Avoid executable link tests during compiler detection.
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)


# ------------------------------------------------------------------------------
# Compiler flags
# ------------------------------------------------------------------------------

set(RISCV_COMMON_FLAGS
    "-march=${RISCV_ARCH} -mabi=${RISCV_ABI}"
)

#
# Use *_FLAGS_INIT rather than repeatedly appending to CMAKE_*_FLAGS.
#
# A toolchain file may be processed more than once; appending directly to
# CMAKE_C_FLAGS/CMAKE_CXX_FLAGS can otherwise duplicate arguments.
#

string(APPEND CMAKE_C_FLAGS_INIT
    " ${RISCV_COMMON_FLAGS}")

string(APPEND CMAKE_CXX_FLAGS_INIT
    " ${RISCV_COMMON_FLAGS}")

string(APPEND CMAKE_ASM_FLAGS_INIT
    " ${RISCV_COMMON_FLAGS}")


# ------------------------------------------------------------------------------
# Cross-compilation search policy
#
# Programs are host tools.
# Headers/libraries/packages should come from the target sysroot.
# ------------------------------------------------------------------------------

set(CMAKE_FIND_ROOT_PATH "${RISCV_TOOLCHAIN_SYSROOT}")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)


# ------------------------------------------------------------------------------
# Configuration summary
# ------------------------------------------------------------------------------

message(STATUS "RISC-V architecture : ${RISCV_ARCH}")
message(STATUS "RISC-V ABI          : ${RISCV_ABI}")
message(STATUS "RISC-V XLEN         : ${RISCV_XLEN}")
message(STATUS "GNU toolchain root  : ${RISCV_TOOLCHAIN_PREFIX}")
message(STATUS "GNU toolchain triple: ${RISCV_TOOLCHAIN_BASENAME}")
message(STATUS "RISC-V GCC          : ${RISCV_GCC}")
message(STATUS "RISC-V G++          : ${RISCV_GXX}")
message(STATUS "RISC-V sysroot      : ${RISCV_TOOLCHAIN_SYSROOT}")
