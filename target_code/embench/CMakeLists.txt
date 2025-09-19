set(EMBENCH_DIR ${CMAKE_CURRENT_SOURCE_DIR}/embench-iot/)

add_custom_target(embench)

macro(add_embench_program PROGRAM)
	set(SRC_FILES "${ARGN}")

  add_executable_etiss(embench_${PROGRAM})
  target_include_directories(embench_${PROGRAM} PRIVATE
    ${EMBENCH_DIR}/support
  )
  file(GLOB BENCH_FILES ${EMBENCH_DIR}/src/${PROGRAM}/*.c )

  target_sources(embench_${PROGRAM} PRIVATE
    ${BENCH_FILES}
    ${EMBENCH_DIR}/support/main.c
    ${EMBENCH_DIR}/support/beebsc.c
    ${EMBENCH_DIR}/config/native/boards/default/boardsupport.c
  )

  target_link_libraries(embench_${PROGRAM} PRIVATE m)
  target_compile_definitions(embench_${PROGRAM} PRIVATE CPU_MHZ=1 WARMUP_HEAT=1)
  add_dependencies(embench embench_${PROGRAM})
endmacro()

if(EXISTS ${EMBENCH_DIR}/src)
  add_embench_program(aha-mont64)
  add_embench_program(crc32)
  add_embench_program(cubic)
  add_embench_program(edn)
  add_embench_program(huffbench)
  add_embench_program(matmult-int)
  add_embench_program(md5sum)
  add_embench_program(minver)
  add_embench_program(nbody)
  add_embench_program(nettle-aes)
  add_embench_program(nettle-sha256)
  add_embench_program(nsichneu)
  add_embench_program(picojpeg)
  add_embench_program(primecount)
  add_embench_program(qrduino)
  add_embench_program(sglib-combined)
  add_embench_program(slre)
  add_embench_program(st)
else()
  message(WARNING "Skipping embench programs due to missing sources")
endif()
