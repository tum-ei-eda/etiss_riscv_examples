#include <stdio.h>

#include "cfu.h"

#define SSSA_OP_RESET   0x7F
#define SSSA_OP_MAC     0x40
#define SSSA_OP_POINTER 0x01


int main()
{
    printf("Hello world!\n");
    cfu_op0_hw(SSSA_OP_RESET, 0, 0);
    cfu_op0_hw(SSSA_OP_MAC, 0, 0);
    cfu_op0_hw(SSSA_OP_POINTER, 0, 0);
    printf("Bye!\n");
    return 0;
}
