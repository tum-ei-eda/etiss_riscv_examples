add_executable_etiss(dhry dhry_1.c dhry_2.c)

SET(NUM_RUNS "1" CACHE STRING "Run the benchmark NUM_RUNS times")

# TODO: use iters instead?
target_compile_options(dhry PRIVATE
    -DTIME
    -DNUM_RUNS=${NUM_RUNS}
    -Wno-implicit-int -Wno-implicit-function-declaration -Wno-pointer-to-int-cast
)
