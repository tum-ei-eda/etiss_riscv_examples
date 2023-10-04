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
	mkdir build
	cd build
	cmake -DCMAKE_TOOLCHAIN_FILE=rv32gc-toolchain.cmake -DRISCV_TOOLCHAIN_PREFIX=<toolchain prefix> -DCMAKE_INSTALL_PREFIX=../install ..
	make install

`rv32gc-toolchain.cmake` can be substituted by `rv64gc-toolchain.cmake` if desired. N.b.: ETISS currently only executes RV64 correctly with the `gcc` JIT backend. You will have to fix the generated ini files manually: replace `TCCJIT` by `GCCJIT`. Expect a notable performance impact.

## Running
	<etiss prefix>/bin/bare_etiss_processor -i<etiss examples>/install/ini/<config>.ini

