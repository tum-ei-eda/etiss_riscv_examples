cmake_minimum_required(VERSION 3.10)

project(riscv_examples)

set(MEM_ROM_ORIGIN 0x10000000)
set(MEM_ROM_LENGTH 0x00400000)
set(MEM_RAM_ORIGIN 0x20000000)
set(MEM_RAM_LENGTH 0x00100000)

set(MIN_STACK_SIZE 0x1000)
set(MIN_HEAP_SIZE 0x1000)

configure_file(etiss.ld.in etiss.ld @ONLY)
configure_file(memsegs.ini.in memsegs.ini @ONLY)

set(ETISS_LDSCRIPT ${CMAKE_CURRENT_BINARY_DIR}/etiss.ld)
set(ETISS_LDFLAGS "-L${CMAKE_CURRENT_BINARY_DIR}/riscv_crt0 --specs=${CMAKE_CURRENT_SOURCE_DIR}/etiss-semihost.specs -T ${ETISS_LDSCRIPT}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${ETISS_LDFLAGS}")
set(ETISS_ELFINI ${CMAKE_CURRENT_SOURCE_DIR}/elffile.ini.in)

add_subdirectory(riscv_crt0)
add_subdirectory(target_code)
