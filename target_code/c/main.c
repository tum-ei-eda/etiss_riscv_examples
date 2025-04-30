#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "csr.h"

int main()
{

    volatile float sum = 4.0F;
    volatile float num = 5.0F;

    printf("C: Test division of (4.0/5.0) (implicit conversion to double!!): %0.15f\n", (sum/num));
    printf("C: Test division of (float)(4.0/5.0): %0.15f\n", (float)(sum/num));
    printf("C: stored value of (float) 0.8f: %0.15f\n", (float) 0.8f );

    volatile float var = sum/num;
    printf("C: Test division via variable 4.0/5.0: %0.15f\n", var);

    for (int i = 0; i < 5; ++i) {
        uint64_t cycle = rdcycle64();
        uint64_t time = rdtime64();
        uint64_t instret = rdinstret64();

        uint32_t cycle_l = cycle;
        uint32_t cycle_h = cycle >> 32;

        uint32_t time_l = time;
        uint32_t time_h = time >> 32;

        uint32_t instret_l = instret;
        uint32_t instret_h = instret >> 32;

        printf("cycle_l: %u, cycle_h: %u\n", cycle_l, cycle_h);
        printf("time_l: %u, time_h: %u\n", time_l, time_h);
        printf("instret_l: %u, instret_h: %u\n", instret_l, instret_h);

        printf("cycle: %llu\n", cycle);
        printf("time: %llu\n", time);
        printf("instret: %llu\n", instret);

        printf("---\n");
    }

    uint64_t time_now = rdtime64() / 1000000;
    struct tm* timeinfo;

    timeinfo = gmtime(&time_now);

    printf("current time: %s\n", asctime(timeinfo));
}