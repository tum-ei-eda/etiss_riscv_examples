cmake_minimum_required(VERSION 3.10)

set(CMAKE_TRY_COMPILE_PLATFORM_VARIABLES
    LLVM_DIR
    LLVM_VERSION
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
# LLVM toolchain
#
# LLVM_DIR may be:
#   - empty             -> find clang/LLVM tools in PATH
#   - /path/to/llvm     -> expects /path/to/llvm/bin/clang
#   - /path/to/llvm/bin -> also accepted
# ------------------------------------------------------------------------------

set(LLVM_DIR ""
    CACHE PATH "LLVM installation prefix or LLVM bin directory")

if(LLVM_DIR)
    if(EXISTS "${LLVM_DIR}/bin/clang")
        set(LLVM_BIN_DIR "${LLVM_DIR}/bin")
    elseif(EXISTS "${LLVM_DIR}/clang")
        set(LLVM_BIN_DIR "${LLVM_DIR}")
    else()
        message(FATAL_ERROR
            "LLVM_DIR='${LLVM_DIR}' does not contain clang")
    endif()

    find_program(LLVM_CLANG
        NAMES clang
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_CLANGXX
        NAMES clang++
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_OBJCOPY
        NAMES llvm-objcopy
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_OBJDUMP
        NAMES llvm-objdump
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_LLD
        NAMES ld.lld
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

else()
    # No explicit LLVM installation:
    # find clang first...
    find_program(LLVM_CLANG NAMES clang REQUIRED)
    file(REAL_PATH "${LLVM_CLANG}" LLVM_CLANG_REAL)
    message(STATUS "LLVM_CLANG=${LLVM_CLANG}")
    message(STATUS "LLVM_CLANG_REAL=${LLVM_CLANG_REAL}")

    # ...then force the remaining tools to come from the same directory.
    get_filename_component(LLVM_BIN_DIR "${LLVM_CLANG_REAL}" DIRECTORY)
    message(STATUS "LLVM_BIN_DIR=${LLVM_BIN_DIR}")

    find_program(LLVM_CLANGXX
        NAMES clang++
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_OBJCOPY
        NAMES llvm-objcopy
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_OBJDUMP
        NAMES llvm-objdump
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)

    find_program(LLVM_LLD
        NAMES ld.lld
        PATHS "${LLVM_BIN_DIR}"
        NO_DEFAULT_PATH
        REQUIRED)
endif()

set(CMAKE_C_COMPILER   "${LLVM_CLANG}")
set(CMAKE_CXX_COMPILER "${LLVM_CLANGXX}")
set(CMAKE_ASM_COMPILER "${LLVM_CLANG}")

set(CMAKE_OBJCOPY "${LLVM_OBJCOPY}")
set(CMAKE_OBJDUMP "${LLVM_OBJDUMP}")


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


set(RISCV_TOOLCHAIN_SYSROOT
    "${RISCV_TOOLCHAIN_PREFIX}/${RISCV_TOOLCHAIN_BASENAME}")

set(RISCV_TOOLCHAIN_SYSTEM_INCLUDE_DIR
    "${RISCV_TOOLCHAIN_SYSROOT}/include")


# Sanity-check the expected GNU toolchain/sysroot layout.

if(NOT EXISTS "${RISCV_TOOLCHAIN_SYSROOT}")
    message(FATAL_ERROR
        "RISC-V sysroot does not exist: ${RISCV_TOOLCHAIN_SYSROOT}")
endif()

if(NOT EXISTS "${RISCV_TOOLCHAIN_SYSTEM_INCLUDE_DIR}")
    message(FATAL_ERROR
        "RISC-V system include directory does not exist: "
        "${RISCV_TOOLCHAIN_SYSTEM_INCLUDE_DIR}")
endif()


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
# Construct LLVM target triple
#
# GNU toolchain basename may be:
#
#   riscv64-unknown-elf
#
# while LLVM may compile an RV32 multilib from that toolchain. Therefore
# replace the XLEN portion of the GNU triple with the XLEN selected by -march.
#
# Examples:
#
#   RISCV_ARCH=rv64gc
#   RISCV_TOOLCHAIN_BASENAME=riscv64-unknown-elf
#       -> riscv64-unknown-elf
#
#   RISCV_ARCH=rv32im_zicsr_zifencei
#   RISCV_TOOLCHAIN_BASENAME=riscv64-unknown-elf
#       -> riscv32-unknown-elf
# ------------------------------------------------------------------------------

if(RISCV_TOOLCHAIN_BASENAME MATCHES "^riscv(32|64)(.*)$")
    # XLEN-specific GNU triple, e.g. riscv64-unknown-elf.
    #
    # Replace its XLEN with the XLEN selected by RISCV_ARCH.
    set(LLVM_TARGET
        "riscv${RISCV_XLEN}${CMAKE_MATCH_2}")

elseif(RISCV_TOOLCHAIN_BASENAME MATCHES "^riscv(.*)$")
    # XLEN-neutral GNU triple, e.g. riscv-none-elf.
    #
    # Insert the XLEN selected by RISCV_ARCH.
    set(LLVM_TARGET
        "riscv${RISCV_XLEN}${CMAKE_MATCH_1}")

else()
    message(FATAL_ERROR
        "Cannot construct LLVM target from "
        "RISCV_TOOLCHAIN_BASENAME='${RISCV_TOOLCHAIN_BASENAME}'")
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
    "-march=${RISCV_ARCH} -mabi=${RISCV_ABI} --target=${LLVM_TARGET} --gcc-toolchain=${RISCV_TOOLCHAIN_PREFIX} -idirafter ${RISCV_TOOLCHAIN_SYSTEM_INCLUDE_DIR}"
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
# Linker
# ------------------------------------------------------------------------------

string(APPEND CMAKE_EXE_LINKER_FLAGS_INIT
    " -fuse-ld=lld")


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
message(STATUS "LLVM target         : ${LLVM_TARGET}")
message(STATUS "LLVM clang          : ${LLVM_CLANG}")
message(STATUS "LLVM clang++        : ${LLVM_CLANGXX}")
message(STATUS "GNU toolchain root  : ${RISCV_TOOLCHAIN_PREFIX}")
message(STATUS "RISC-V sysroot      : ${RISCV_TOOLCHAIN_SYSROOT}")
