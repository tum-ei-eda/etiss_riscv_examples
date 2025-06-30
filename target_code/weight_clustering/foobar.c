#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "riscv_time.h"
#include "foobar.h"

#ifdef NOPRINT
#define printf(...)
#endif

#define MODE_CPU      1
#define MODE_EMUL     2
#define MODE_CFU      3

#define SEAL5
// #define ALT_MAC

#ifndef MODE
// #define MODE MODE_CPU
// #define MODE MODE_CPU_EMUL
#define MODE MODE_CFU
#endif

#if MODE != MODE_CPU
#define NUM_CLUSTERS 4
#endif  // MODE


// TODO: handle input_offset


#if MODE == MODE_CFU
#include "cfu.h"
#define CFU_OPCODE_PUSH_WEIGHTS        0b0000000
#define CFU_OPCODE_PUSH_WEIGHTS_4B     0b0001000
#define CFU_OPCODE_SET_CODEBOOK_2B     0b0100000
#define CFU_OPCODE_SET_CODEBOOK_4B     0b0101000
#define CFU_OPCODE_SET_CODEBOOK_16B_LO 0b0111000
#define CFU_OPCODE_SET_CODEBOOK_16B_HI 0b0110000
#define CFU_OPCODE_ALU_MAC             0b1000000
#define CFU_OPCODE_ALU_RST             0b1001000
#endif  // MODE

#if MODE == MODE_EMUL
typedef struct {
    uint32_t word0;
    uint32_t word1;
} weights_t;

// typedef struct {
//     uint8_t byte0;
//     uint8_t byte1;
//     uint8_t byte2;
//     uint8_t byte3;
// } codebook_t;
// typedef int8_t[4] codebook_t;
typedef struct {
    int8_t x[4];
} codebook_t;

static weights_t current_weights = {.word0 = 0, .word1 = 0};
// static codebook_t current_codebook = {.byte0 = 0, .byte1 = 0, .byte2 = 0, .byte3 = 0};
static codebook_t current_codebook = {.x = {0, 0, 0, 0}};

static int32_t acc = 0;
#endif  // MODE
// static int32_t acc = 0;

// TODO: fake op
// static inline uint32_t cfu_op0_hw(uint16_t opcode, uint32_t rs1, uint32_t rs2) {
//     // __asm__ volatile (
//     __asm__ (
//         "nop"
//         :
//         : "r"(rs1), "r"(rs2)
//         : // no clobbers
//     );
//     return 42;
//     // return rs1 * rs2;
//     // uint32_t result;
//     // optionally use result to prevent optimization
//     // acc += rs1 * rs2;  // optional
//     // return acc;
// }

#if MODE != MODE_CPU

#if MODE == MODE_EMUL
#if NUM_CLUSTERS == 4
static void __attribute__((always_inline)) inline set_codebook_4b(int8_t byte0, int8_t byte1, int8_t byte2, int8_t byte3) {
    // printf("program_codebook\n");
    // current_codebook.byte0 = byte0;
    // current_codebook.byte1 = byte1;
    // current_codebook.byte2 = byte2;
    // current_codebook.byte3 = byte3;
    current_codebook.x[0] = byte0;
    current_codebook.x[1] = byte1;
    current_codebook.x[2] = byte2;
    current_codebook.x[3] = byte3;
}
#else
// TODO
#endif  // NUM_CLUSTERS

#elif MODE == MODE_CFU
#if NUM_CLUSTERS == 4
static void __attribute__((always_inline)) inline set_codebook_4b(uint32_t codebook) {
    // printf("program_codebook\n");
#ifdef SEAL5
    __builtin_riscv_xcfu_cfu0_set_codebook_4b(codebook);
#else
    cfu_op0_hw(CFU_OPCODE_SET_CODEBOOK_4B, codebook, 0);
#endif  // SEAL5
}
#else
// TODO
#endif  // NUM_CLUSTERS
#endif  // MODE

#if MODE == MODE_EMUL
#if NUM_CLUSTERS == 4
static void __attribute__((always_inline)) inline push_weights_4b(uint32_t word0, uint32_t word1) {
    // printf("push_weights_4b\n");
    current_weights.word0 = word0;
    current_weights.word1 = word1;
}
#else
// TODO
#endif  // NUM_CLUSTERS
#elif MODE == MODE_CFU
#if NUM_CLUSTERS == 4
// static void __attribute__((always_inline)) inline push_weights_4b(uint32_t word0, uint32_t word1) {
static int32_t __attribute__((always_inline)) inline push_weights_4b(uint32_t word0, uint32_t word1) {
    // printf("push_weights_4b\n");
#ifdef SEAL5
    return __builtin_riscv_xcfu_cfu0_push_weights_4b(word0);
#else
    cfu_op0_hw(CFU_OPCODE_PUSH_WEIGHTS_4B, word0, word1);
#endif  // SEAL5
}
#else
// TODO
#endif  // NUM_CLUSTERS
#endif  // MODE

#define UNPACK_INT2(x, i) (((x) >> (2 * (i))) & 0x3)
#define UNPACK_INT8(x, i) ((int8_t)((((x) >> (8 * (i))) & 0xFF)))
#define LOOKUP(weights, codebook, i) (int8_t)(codebook[UNPACK_INT2(weights, i)])

// static void __attribute__((always_inline)) inline alu_mac(uint32_t word0, uint32_t word1) {
static int32_t __attribute__((always_inline)) inline alu_mac(uint32_t word0, uint32_t word1) {
    // printf("alu_mac\n");
    // TODO: packed!
    // acc += current_weights.word0 * word0;
    // acc += current_weights.word1 * word1;
#if MODE == MODE_EMUL
    // printf("weights=%x, i=%u\n", current_weights.word0, 0);
    // printf("UNPACK_INT2(weights, i)=%u\n", UNPACK_INT2(current_weights.word0, 0));
    // printf("codebook[UNPACK_INT2(weights, i)]=%d\n", current_codebook.x[UNPACK_INT2(current_weights.word0, 0)]);
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 0)=%d\n", LOOKUP(current_weights.word0, current_codebook.x, 0));
    // printf("UNPACK_INT8(word0, 0)=%d\n", UNPACK_INT8(word0, 0));
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 0) * UNPACK_INT8(word0, 0) = %d\n", LOOKUP(current_weights.word0, current_codebook.x, 0) * UNPACK_INT8(word0, 0));
    acc += LOOKUP(current_weights.word0, current_codebook.x, 0) * UNPACK_INT8(word0, 0);
    // printf("acc=%d\n", acc);
    // printf("word0=%08x\n", word0);
    // printf("weights=%x, i=%u\n", current_weights.word0, 1);
    // printf("UNPACK_INT2(weights, i)=%u\n", UNPACK_INT2(current_weights.word0, 1));
    // printf("codebook[UNPACK_INT2(weights, i)]=%d\n", current_codebook.x[UNPACK_INT2(current_weights.word0, 1)]);
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 1)=%d\n", LOOKUP(current_weights.word0, current_codebook.x, 1));
    // printf("UNPACK_INT8(word0, 0)=%d\n", UNPACK_INT8(word0, 1));
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 1) * UNPACK_INT8(word0, 1) = %d\n", (int32_t)LOOKUP(current_weights.word0, current_codebook.x, 1) * (int32_t)UNPACK_INT8(word0, 1));
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 1) * UNPACK_INT8(word0, 1) = %u\n", (int32_t)LOOKUP(current_weights.word0, current_codebook.x, 1) * (int32_t)UNPACK_INT8(word0, 1));
    // printf("LOOKUP(current_weights.word0, current_codebook.x, 1) * UNPACK_INT8(word0, 1) = %x\n", (int32_t)LOOKUP(current_weights.word0, current_codebook.x, 1) * (int32_t)UNPACK_INT8(word0, 1));
    acc += LOOKUP(current_weights.word0, current_codebook.x, 1) * UNPACK_INT8(word0, 1);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 2) * UNPACK_INT8(word0, 2);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 3) * UNPACK_INT8(word0, 3);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 4) * UNPACK_INT8(word1, 0);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 5) * UNPACK_INT8(word1, 1);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 6) * UNPACK_INT8(word1, 2);
    // printf("acc=%d\n", acc);
    acc += LOOKUP(current_weights.word0, current_codebook.x, 7) * UNPACK_INT8(word1, 3);
    // printf("acc=%d\n", acc);
#elif MODE == MODE_CFU
#ifdef SEAL5
#ifdef ALT_MAC
    int32_t acc = __builtin_riscv_xcfu_cfu0_alu_mac_alt(word0, word1);
#else
    int32_t acc = __builtin_riscv_xcfu_cfu0_alu_mac(word0, word1);
#endif
    return acc;
#else
    cfu_op0_hw(CFU_OPCODE_ALU_MAC, word0, word1);
#endif  // SEAL5
#endif  // MODE
    // TODO: if non-zero?
    // acc += current_weights.word1 * word1;
}

static int32_t __attribute__((always_inline)) inline get_acc() {
    // printf("get_acc\n");
#if MODE == MODE_EMUL
    return acc;
#elif MODE == MODE_CFU
#ifdef SEAL5
    return __builtin_riscv_xcfu_cfu0_alu_mac(0, 0);
#else
    return cfu_op0_hw(CFU_OPCODE_ALU_MAC, 0, 0);  // TODO: opcode for load?
#endif  // SEAL5
#endif  // MODE
}


static void __attribute__((always_inline)) inline alu_rst() {
    // printf("alu_rst\n");
#if MODE == MODE_EMUL
    acc = 0;
#elif MODE == MODE_CFU
#ifdef SEAL5
    __builtin_riscv_xcfu_cfu0_alu_rst();
#else
    cfu_op0_hw(CFU_OPCODE_ALU_RST, 0, 0);
#endif  // SEAL5
#endif  // MODE
}
#endif  // MODE

volatile uint32_t input_data[8*16*16*32];

__attribute__((noinline)) static void sink(uint32_t x) {
    // Do nothing
    (void)x;
}


int foobar() {
    size_t batches = 1;
    size_t output_height = 16;
    size_t output_width = 16;
    size_t output_channels = 32;
    // int output_height = 1;
    // int output_width = 1;
    // int output_channels = 1;
    for (size_t i = 0; i < sizeof(input_data) / sizeof(uint32_t); i++) {
        input_data[i] = rand();
    }

    // num clusters = 4 -> 8x2 bits

    #if MODE == MODE_CPU
    int8_t weights_data[8] = {-5, 10, 20, 10, -5, 10, 20, -5};
    #else
    int8_t codebook[4] = {10, 20, -5, 15};

    // 00 00 00 00 00 00 00 00 10 01 00 10 00 01 00 10;
    uint32_t weight_codes_lo = 0b00000000000000001001001000010010;
    uint32_t weight_codes_hi = 0b0;
    #endif  // MODE

    // uint32_t input_data[] = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8};
    input_data[0] = 0x1;
    input_data[1] = 0x2;
    input_data[2] = 0x3;
    input_data[3] = 0x4;
    input_data[4] = 0x5;
    input_data[5] = 0x6;
    input_data[6] = 0x7;
    input_data[7] = 0x8;

    uint64_t before = rdcycle64();
    #if MODE == MODE_CPU
    int32_t res = 0;
    #elif MODE == MODE_EMUL
    #if NUM_CLUSTERS == 4
    set_codebook_4b(codebook[0], codebook[1], codebook[2], codebook[3]);
    # else
    // TODO
    #endif  // NUM_CLUSTERS
    #elif MODE == MODE_CFU
    #if NUM_CLUSTERS == 4
    set_codebook_4b(codebook[0] | (codebook[1] << 8) | (codebook[2] << 16) | (codebook[3] << 24));
    # else
    // TODO
    #endif  // NUM_CLUSTERS
    #endif  // MODE
    int32_t res = 0;
    #ifdef ALT_MAC
    int32_t res2 = 0;
    #endif  // ALT_MAC
    for (size_t batch = 0; batch < batches; ++batch) {
      for (size_t oh = 0; oh < output_height; ++oh) {
        for (size_t ow = 0; ow < output_width; ++ow) {
          // #pragma GCC unroll 32
          for (size_t oco = 0; oco < output_channels / 8; ++oco) {
            // Push 32 weights, each as 2-bit indices (4 clusters, packed into two 32b words)
            // size_t base = batch*8*16*32*32+oh*8*32*16+ow*8*32+oco*8;
            size_t base = batch*2*16*32*32+oh*2*32*16+ow*2*32+oco*2;
            #if MODE == MODE_EMUL
            #if NUM_CLUSTERS == 4
            push_weights_4b(weight_codes_lo, weight_codes_hi);    // CFU_OPCODE_PUSH_WEIGHTS
            # else
            // TODO
            #endif  // NUM_CLUSTERS
            #elif MODE == MODE_CFU
            #if NUM_CLUSTERS == 4
            push_weights_4b(weight_codes_lo, weight_codes_hi);    // CFU_OPCODE_PUSH_WEIGHTS
            # else
            // TODO
            #endif  // NUM_CLUSTERS
            #endif  // MODE

            #if MODE == MODE_CPU
            for (size_t i = 0; i < 4; i++) {
                for (size_t j = 0; j < 8; j++) {
                    // printf("i=%d\n", i);
                    // printf("j=%d\n", j);
                    // printf("input_data[%u+%u]=%d\n", base, i*8+j, ((int8_t*)input_data)[base+i*8+j]);
                    // printf("weights_data[%u]=%d\n", j, weights_data[j]);
                    res += ((int8_t*)input_data)[base+i*8+j] * weights_data[j];
                    // printf("res=%d\n", res);
                }
            }
            #else
            // Each alu_mac call performs 8 clustered MACs at once
            uint32_t *restrict ptr = (uint32_t *restrict) &input_data[base];
            // alu_mac(input_data[base+0], input_data[base+1]);   // CFU_OPCODE_ALU_MAC
            // alu_mac(input_data[base+2], input_data[base+3]);   // CFU_OPCODE_ALU_MAC
            // alu_mac(input_data[base+4], input_data[base+5]);   // CFU_OPCODE_ALU_MAC
            // alu_mac(input_data[base+6], input_data[base+7]);   // CFU_OPCODE_ALU_MAC
            #ifdef ALT_MAC
            res2 += alu_mac(ptr[0], ptr[1]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res2) :);
            res2 += alu_mac(ptr[2], ptr[3]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res2) :);
            res2 += alu_mac(ptr[4], ptr[5]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res2) :);
            res2 += alu_mac(ptr[6], ptr[7]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res2) :);
            #else
            res = alu_mac(ptr[0], ptr[1]);   // CFU_OPCODE_ALU_MAC
            // sink(alu_mac(ptr[0], ptr[1]));   // CFU_OPCODE_ALU_MAC
            // sink(res);
            // asm volatile("" : : "r"(res));
            res = alu_mac(ptr[2], ptr[3]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res));
            res = alu_mac(ptr[4], ptr[5]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res));
            res = alu_mac(ptr[6], ptr[7]);   // CFU_OPCODE_ALU_MAC
            // asm volatile("" : : "r"(res));
            #endif  // ALT_MAC
            #endif

          }
        }
      }
    }
    #if MODE != MODE_CPU
    res = get_acc();
    // Optionally reset accumulator (typically after storing result)
    alu_rst();                               // CFU_OPCODE_ALU_RST
    #endif  // MODE
    uint64_t after = rdcycle64();
    uint64_t diff = after - before;
    printf("res=%d\n", res);
    #ifdef ALT_MAC
    printf("res2=%d\n", res2);
    #endif  // ALT_MAC
    printf("diff=%llu\n", diff);

    return 42;
}
