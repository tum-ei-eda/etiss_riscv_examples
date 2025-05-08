#include <stdio.h>

#ifndef NUM_RUNS
#define NUM_RUNS 1
#endif

int main()
{
    for (size_t n = 0; n < NUM_RUNS; n++) {
        printf("Hello world!\n");
    }
}
