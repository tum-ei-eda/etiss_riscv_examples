add_executable_etiss(dhry dhry_1.c dhry_2.c)

target_compile_options(dhry PRIVATE
    -DTIME
    -Wno-implicit-int -Wno-implicit-function-declaration -Wno-pointer-to-int-cast
)
