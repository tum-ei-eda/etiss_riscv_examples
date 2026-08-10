# ETISS RISC-V Examples

This repository contains test and example programs for RISC-V ETISS. A minimal linker configuration and startup code as well as basic exception handling is provided in `riscv_crt0`. The file `etiss-semihost.specs` is used to instruct the linker to use `riscv_crt0` as startup code, and substitute standard system calls by semihosting calls.

CMake is used to automatically generate appropriate linker scripts and ETISS ini configurations. The latter can directly be loaded by `bare_etiss_processor`.

# Usage

## Requirements
* CMake >= 3.10
* A RISC-V gcc cross-compiler toolchain, installed to `<toolchain prefix>`
* ETISS with semihosting support, installed to `<etiss prefix>`
* This repository, cloned to `<etiss examples>`

## Building
Starting in `<etiss examples>`, run the following commands:

```sh
# GNU/GCC build (Release)
cmake --preset rv32-gcc-release -DRISCV_TOOLCHAIN_PREFIX=<toolchain prefix>
cmake --build --preset rv32-gcc-release
cmake --install --preset rv32-gcc-release

# LLVM/Clang build (Debug)
cmake --preset rv32-llvm-debug -DRISCV_TOOLCHAIN_PREFIX=<toolchain prefix> -DLLVM_DIR=<llvm install dir>
cmake --build --preset rv32-llvm-debug
cmake --install --preset rv32-llvm-debug
```

Output artifacts can be found in `build/<preset name>/install`. Use CMake options `-B build/` and `-DCMAKE_INSTALL_PREFIX` to override the default paths.

Use the following options to override the RISC-V specific compiliation flags:

```
RISCV_ARCH
RISCV_ABI
RISCV_TOOLCHAIN_PREFIX
RISCV_TOOLCHAIN_BASENAME
```

Available presets can be queried as follows:

```
> cmake --list-presets
Available configure presets:
  "rv32-gcc-debug"    - RV32 GCC Debug
  "rv32-gcc-release"  - RV32 GCC Release
  "rv32-llvm-debug"   - RV32 LLVM Debug
  "rv32-llvm-release" - RV32 LLVM Release
  "rv64-gcc-debug"    - RV64 GCC Debug
  "rv64-gcc-release"  - RV64 GCC Release
  "rv64-llvm-debug"   - RV64 LLVM Debug
  "rv64-llvm-release" - RV64 LLVM Release
```


If `LLVM_DIR` is not set, the system llvm installation will be used.


## Running
	<etiss prefix>/bin/bare_etiss_processor -i<etiss examples>/build/<preset name>/install/ini/<config>.ini
