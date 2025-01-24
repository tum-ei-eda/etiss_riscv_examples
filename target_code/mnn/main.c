#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("Hello world!\n");
    // int x = 10;
    // int y = 5;
    // const int8_t increment = 5;
    //     // const, otherwise compiler complains:
    // int result = 0;
    // // Register Add
    // asm (".insn r 0x2b, 0x7, 0x7f, %0, %1, %2" : "=r" (result) : "r" (x), "r" (y) );
    // // asm (".insn r 0x2B, 0x3, 0x48, x3, x4, x5");
    // printf("Register Add result = %d\n", result);

    // // Immediate Add
    // asm volatile(".insn i 0x2b, 0x7, %0, %1, %2" : "=r" (result) : "r" (x), "i" (increment) );
    // printf("Immediate Add result = %d\n", result);

    uint32_t v8i4weights = 0x76543210;  // (+7 +6 +5 +4 +3 +2 +1 +0) -> 0b0111_0110_0101_0100_0011_0010_0001_0000
    uint32_t v8i4weights2 = 0x89abcdef;  // (-8 -7 -6 -5 -4 -3 -2 -1) -> 0b1000_1001_1010_1011_1100_1101_1110_1111
    uint32_t unpacked = 0;
    uint32_t unpacked2 = 0;

    asm volatile("mnn.pair_extract %0, %1, 0" : "=r" (unpacked) : "r" (v8i4weights));
    printf("unpacked[idx=0] = %08x\n", unpacked);    // expect 0x0001_0000
    asm volatile("mnn.pair_extract %0, %1, 1" : "=r" (unpacked) : "r" (v8i4weights));
    printf("unpacked[idx=1] = %08x\n", unpacked);    // expect 0x0003_0002
    asm volatile("mnn.pair_extract %0, %1, 2" : "=r" (unpacked) : "r" (v8i4weights));
    printf("unpacked[idx=2] = %08x\n", unpacked);    // expect 0x0005_0004
    asm volatile("mnn.pair_extract %0, %1, 3" : "=r" (unpacked) : "r" (v8i4weights));
    printf("unpacked[idx=3] = %08x\n", unpacked);    // expect 0x0007_0006

    asm volatile("mnn.pair_extract %0, %1, 4" : "=r" (unpacked2) : "r" (v8i4weights2));
    printf("unpacked2[idx=0] = %08x\n", unpacked2);    // expect 0xfffe_ffff
    asm volatile("mnn.pair_extract %0, %1, 5" : "=r" (unpacked2) : "r" (v8i4weights2));
    printf("unpacked2[idx=1] = %08x\n", unpacked2);    // expect 0xfffc_fffd
    asm volatile("mnn.pair_extract %0, %1, 6" : "=r" (unpacked2) : "r" (v8i4weights2));
    printf("unpacked2[idx=2] = %08x\n", unpacked2);    // expect 0xfffa_fffb
    asm volatile("mnn.pair_extract %0, %1, 7" : "=r" (unpacked2) : "r" (v8i4weights2));
    printf("unpacked2[idx=3] = %08x\n", unpacked2);    // expect 0xfff8_fff9
}
