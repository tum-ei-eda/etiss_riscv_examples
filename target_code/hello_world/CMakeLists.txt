add_executable_etiss(hello_world main.c)

SET(NUM_RUNS "1" CACHE STRING "Run the benchmark NUM_RUNS times")

target_compile_options(hello_world PRIVATE
    -DNUM_RUNS=${NUM_RUNS}
)
