#include <stdio.h>

#include "cfu.h"

#define CFU_OPCODE_PUSH_WEIGHTS        0b0000000
#define CFU_OPCODE_PUSH_WEIGHTS_4B     0b0001000
#define CFU_OPCODE_SET_CODEBOOK_2B     0b0100000
#define CFU_OPCODE_SET_CODEBOOK_4B     0b0101000
#define CFU_OPCODE_SET_CODEBOOK_16B_LO 0b0111000
#define CFU_OPCODE_SET_CODEBOOK_16B_HI 0b0110000
#define CFU_OPCODE_ALU_MAC             0b1000000
#define CFU_OPCODE_ALU_RST             0b1001000

int main()
{
    printf("Hello world!\n");
    // cfu_op0_hw(CFU_OPCODE_PUSH_WEIGHTS, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_PUSH_WEIGHTS_4B, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_2B, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_4B, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_16B_LO, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_16B_HI, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_ALU_MAC, 0, 0);
    // cfu_op0_hw(CFU_OPCODE_ALU_RST, 0, 0);
    #include "foobar.h"
    int ret = foobar();
    printf("Bye!\n");
    return ret;
}
