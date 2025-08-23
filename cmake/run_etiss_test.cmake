if(NOT EXISTS "${PROG}" OR NOT EXISTS "${CFG}")
  message("Skipping ${PROG}, not built")
  # 77 is the magic skip code
  return(77)
endif()

if(NOT DEFINED ENV{ETISS})
  message(FATAL_ERROR "ETISS env not set")
endif()

execute_process(COMMAND "$ENV{ETISS}" "-i${CFG}" RESULT_VARIABLE res)
if(NOT res EQUAL 0)
  message(FATAL_ERROR "Simulator failed with code ${res}")
endif()
