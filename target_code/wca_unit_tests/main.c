#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "cfu.h"

#define CFU_OPCODE_PUSH_WEIGHTS        0b0010000
#define CFU_OPCODE_SET_CODEBOOK_2B     0b0100000
#define CFU_OPCODE_SET_CODEBOOK_4B     0b0101000
#define CFU_OPCODE_SET_CODEBOOK_16B    0b0111000
#define CFU_OPCODE_ALU_MAC             0b1000000
#define CFU_OPCODE_MAC_READ            0b1010000
#define CFU_OPCODE_MAC_READ_NO_RESET   0b1010100
#define CFU_OPCODE_ALU_RST             0b1001000
#define CFU_OPCODE_DEBUG_DUMP          0b1010010


int main()
{
    printf("Hello world!\n");

    // 2 clusters
    // TODO
    cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_2B, 0, 0);

    // 4 clusters
    int32_t acc_rst0 = cfu_op0_hw(CFU_OPCODE_MAC_READ_NO_RESET, 0, 0);
    printf("acc_rst0=0x%x [%d]\n", acc_rst0, acc_rst0);
    if (acc_rst0 != 0) {
        printf("ERROR: acc_rst0 != 0\n");
        exit(1);
    }
    cfu_op0_hw(CFU_OPCODE_ALU_RST, 0, 0);
    int32_t acc_rst1 = cfu_op0_hw(CFU_OPCODE_MAC_READ_NO_RESET, 0, 0);
    printf("acc_rst1=0x%x [%d]\n", acc_rst1, acc_rst1);
    if (acc_rst0 != acc_rst1) {
        printf("ERROR: acc_rst0 != acc_rst1\n");
        exit(1);
    }

    int8_t activations[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 127, -1, -2, -3, -4, -5, -6, -7, -8, -9,-10, -11, -12, -13, -14, -15};
    // int8_t codebook[8] = {-1, -2, -3, 127, 3, 2, 1, 0}
    // uint64_t packed_codebook = 0xfffefd7f030100;  // 0b11111111_11111110_11111101_01111111_00000011_00000001_00000000
    int8_t codebook[4] = {-1, 127, 1, 0};
    int8_t weights[32] = {-1, 127, 1, 0, 0, 1, 127, -1, 0, 0, 0, 0, 1, 1, 1, 1, 127, 127, 127, 127, -1, -1, -1, -1, -1, 127, 1, 0, 0, 1, 127, -1};
    int8_t packed_weights_arr[32] = {0, 1, 2, 3, 3, 2, 1, 0, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1 ,0, 0, 0, 0, 0, 1, 2, 3, 3, 2, 1, 0};
    uint32_t packed_codebook = 0xff7f0100;  // 0b11111111_01111111_00000001_00000000
    printf("packed_codebook=0x%x\n", packed_codebook);
    uint64_t packed_weights = 0x1be4ffaa55001be4; // 0b00_01_10_11_11_10_01_00_11_11_11_11_10_10_10_10_01_01_01_01_00_00_00_00_00_01_10_11_11_10_01_00
    // TODO: check if order correct?
    uint32_t packed_weights_lo = packed_weights & 0xffffffff;
    uint32_t packed_weights_hi = (packed_weights >> 32) & 0xffffffff;
    printf("packed_weights_lo=0x%x\n", packed_weights_lo);
    printf("packed_weights_hi=0x%x\n", packed_weights_hi);
    cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_4B, packed_codebook, 0);
    cfu_op0_hw(CFU_OPCODE_PUSH_WEIGHTS, packed_weights_lo, packed_weights_hi);
    const size_t num_iter = 1;
    int32_t ref_acc = 0;
    for (size_t i = 0; i < num_iter; i++) {
        printf("i=%lu\n", i);
        uint32_t* act_ptr = (uint32_t*)&activations[i*8];
        uint32_t packed_act_lo = act_ptr[0];
        uint32_t packed_act_hi = act_ptr[1];
        printf("packed_act_lo=0x%x\n", packed_act_lo);
        printf("packed_act_hi=0x%x\n", packed_act_hi);
        cfu_op0_hw(CFU_OPCODE_ALU_MAC, packed_act_lo, packed_act_hi);
        for (size_t j = 0; j < 8; j++) {
            printf("j=%lu\n", j);
            size_t idx = i * 8 + j;
            printf("idx=%lu\n", idx);
            int32_t a = (int32_t)activations[idx];
            printf("a=%d\n", a);
            int32_t w_ref = (int32_t)weights[idx];
            printf("w_ref=%d\n", w_ref);
            uint8_t w_index = packed_weights_arr[idx];
            printf("w_index=%u\n", w_index);
            int32_t w_lookup = (int32_t)codebook[w_index];
            printf("w_lookup=%d\n", w_lookup);
            if (w_ref != w_lookup) {
                printf("ERROR: w_ref != w_lookup\n");
                exit(1);
            }

            int32_t product_ref = a * w_ref;
            printf("product_ref=%d\n", product_ref);
            int32_t product = a * w_lookup;
            printf("product=%d\n", product);
            printf("ref_acc_old=%d\n", ref_acc);
            ref_acc += product;
            printf("ref_acc_new=%d\n", ref_acc);

        }
    }
    int32_t acc0 = cfu_op0_hw(CFU_OPCODE_MAC_READ_NO_RESET, 0, 0);
    printf("acc0=0x%x [%d]\n", acc0, acc0);
    int32_t acc1 = cfu_op0_hw(CFU_OPCODE_MAC_READ, 0, 0);
    printf("acc1=0x%x [%d]\n", acc1, acc1);
    if (acc0 != acc1) {
        printf("ERROR: acc0 != acc1\n");
        exit(1);
    }
    int32_t acc2 = cfu_op0_hw(CFU_OPCODE_MAC_READ, 0, 0);
    printf("acc2=0x%x [%d]\n", acc2, acc2);
    if (acc2 != 0) {
        printf("ERROR: acc2 != 0\n");
        exit(1);
    }
    cfu_op0_hw(CFU_OPCODE_DEBUG_DUMP, 0, 0);
    printf("ref_acc=%d\n", ref_acc);
    if (acc0 != ref_acc) {
        printf("ERROR: acc0 != ref_acc\n");
        exit(1);
    }

    // 16 clusters
    // TODO
    cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_16B, 0, 0);

    printf("Bye!\n");
    return 0;
}
