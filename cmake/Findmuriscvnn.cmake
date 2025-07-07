# Findmuriscvnn.cmake

if(POLICY CMP0079)
  cmake_policy(SET CMP0079 NEW)
endif()

# Allow user to predefine the path
if(NOT DEFINED muriscvnn_ROOT)
  set(muriscvnn_ROOT "${CMAKE_CURRENT_LIST_DIR}/../3rdparty/muriscv-nn")
endif()

# Flags can be optionally set by the user beforehand
if(NOT DEFINED USE_VEXT)
  set(USE_VEXT OFF)
endif()
if(NOT DEFINED USE_PORTABLE)
  set(USE_PORTABLE OFF)
endif()
if(NOT DEFINED USE_PEXT)
  set(USE_PEXT OFF)
endif()

# Validate VEXT/PEXT combination
if(USE_VEXT AND USE_PEXT)
  message(FATAL_ERROR "VEXT and PEXT cannot be enabled simultaneously.")
elseif(USE_VEXT)
  if(USE_PORTABLE)
    add_definitions(-DUSE_PORTABLE_VEXT)
  else()
    add_definitions(-DUSE_VEXT)
  endif()
elseif(USE_PEXT)
  if(USE_PORTABLE)
    add_definitions(-DUSE_PORTABLE_PEXT)
  else()
    add_definitions(-DUSE_PEXT)
  endif()
endif()

# Build from source using add_subdirectory
if(NOT TARGET muriscvnn::muriscvnn)
  add_subdirectory("${muriscvnn_ROOT}/Source" "${CMAKE_BINARY_DIR}/muriscvnn")

  target_include_directories(muriscvnn PUBLIC
    "${muriscvnn_ROOT}/Include"
    "${muriscvnn_ROOT}/Include/CMSIS/NN/Include"
  )
  target_link_libraries(muriscvnn PUBLIC m)

  add_library(muriscvnn::muriscvnn ALIAS muriscvnn)
endif()

set(MURISCVNN_INCLUDE_DIRS
  "${muriscvnn_ROOT}/Include"
  "${muriscvnn_ROOT}/Include/CMSIS/NN/Include"
  "${muriscvnn_ROOT}/Include/CMSIS/NN"
)

set(muriscvnn_FOUND TRUE)
