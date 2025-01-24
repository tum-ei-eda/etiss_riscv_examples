#nclude <stdio.h>
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

    uint32_t v4i8weights = 0x03020100;  // (+3 +2 +1 0) -> 0b00000011_00000010_00000001_00000000
    uint32_t v4i8weights2 = 0x7f7e7d7c;  // (+127 +126 +125 +124) -> 0b01111111_01111110_01111101_01111100
    uint32_t v4i8weights3 = 0xfcfdfeff;  // (-4 -3 -2 -1 | +252 +253 +254 +255) -> 0b11111100_11111101_11111110_11111111
    uint32_t v4i8weights4 = 0x80818283;  // (-128 -127 -126 -125 | +128 +129 +130 +131) -> 0b10000000_10000001_10000010_10000011
    uint32_t unpacked = 0;

    asm volatile("mnn.exths.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b10] = %08x\n", unpacked);    // expect 0x0001_0000
    asm volatile("mnn.exths.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b20] = %08x\n", unpacked);    // expect 0x0002_0000
    asm volatile("mnn.exths.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b30] = %08x\n", unpacked);    // expect 0x0003_0000
    asm volatile("mnn.exths.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b21] = %08x\n", unpacked);    // expect 0x0002_0001
    asm volatile("mnn.exths.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b31] = %08x\n", unpacked);    // expect 0x0003_0001
    asm volatile("mnn.exths.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exths.b32] = %08x\n", unpacked);    // expect 0x0003_0002

    asm volatile("mnn.exths.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b10] = %08x\n", unpacked);    // expect 0x007d_007c
    asm volatile("mnn.exths.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b20] = %08x\n", unpacked);    // expect 0x007e_007c
    asm volatile("mnn.exths.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b30] = %08x\n", unpacked);    // expect 0x007f_007c
    asm volatile("mnn.exths.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b21] = %08x\n", unpacked);    // expect 0x007e_007d
    asm volatile("mnn.exths.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b31] = %08x\n", unpacked);    // expect 0x007f_007d
    asm volatile("mnn.exths.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exths.b32] = %08x\n", unpacked);    // expect 0x007f_007e

    asm volatile("mnn.exths.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b10] = %08x\n", unpacked);    // expect 0xfffe_ffff
    asm volatile("mnn.exths.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b20] = %08x\n", unpacked);    // expect 0xfffd_ffff
    asm volatile("mnn.exths.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b30] = %08x\n", unpacked);    // expect 0xfffc_ffff
    asm volatile("mnn.exths.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b21] = %08x\n", unpacked);    // expect 0xfffd_fffe
    asm volatile("mnn.exths.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b31] = %08x\n", unpacked);    // expect 0xfffc_fffe
    asm volatile("mnn.exths.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exths.b32] = %08x\n", unpacked);    // expect 0xfffc_fffd

    asm volatile("mnn.exths.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b10] = %08x\n", unpacked);    // expect 0xff82_ff83
    asm volatile("mnn.exths.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b20] = %08x\n", unpacked);    // expect 0xff81_ff83
    asm volatile("mnn.exths.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b30] = %08x\n", unpacked);    // expect 0xff80_ff83
    asm volatile("mnn.exths.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b21] = %08x\n", unpacked);    // expect 0xff81_ff82
    asm volatile("mnn.exths.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b31] = %08x\n", unpacked);    // expect 0xff80_ff82
    asm volatile("mnn.exths.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exths.b32] = %08x\n", unpacked);    // expect 0xff80_ff81

    asm volatile("mnn.exthz.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b10] = %08x\n", unpacked);    // expect 0x0001_0000
    asm volatile("mnn.exthz.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b20] = %08x\n", unpacked);    // expect 0x0002_0000
    asm volatile("mnn.exthz.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b30] = %08x\n", unpacked);    // expect 0x0003_0000
    asm volatile("mnn.exthz.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b21] = %08x\n", unpacked);    // expect 0x0002_0001
    asm volatile("mnn.exthz.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b31] = %08x\n", unpacked);    // expect 0x0003_0001
    asm volatile("mnn.exthz.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights));
    printf("unpacked[mnn.exthz.b32] = %08x\n", unpacked);    // expect 0x0003_0002

    asm volatile("mnn.exthz.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b10] = %08x\n", unpacked);    // expect 0x007d_007c
    asm volatile("mnn.exthz.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b20] = %08x\n", unpacked);    // expect 0x007e_007c
    asm volatile("mnn.exthz.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b30] = %08x\n", unpacked);    // expect 0x007f_007c
    asm volatile("mnn.exthz.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b21] = %08x\n", unpacked);    // expect 0x007e_007d
    asm volatile("mnn.exthz.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b31] = %08x\n", unpacked);    // expect 0x007f_007d
    asm volatile("mnn.exthz.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights2));
    printf("unpacked[mnn.exthz.b32] = %08x\n", unpacked);    // expect 0x007f_007e

    asm volatile("mnn.exthz.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b10] = %08x\n", unpacked);    // expect 0x00fe_00ff
    asm volatile("mnn.exthz.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b20] = %08x\n", unpacked);    // expect 0x00fd_00ff
    asm volatile("mnn.exthz.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b30] = %08x\n", unpacked);    // expect 0x00fc_00ff
    asm volatile("mnn.exthz.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b21] = %08x\n", unpacked);    // expect 0x00fd_00fe
    asm volatile("mnn.exthz.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b31] = %08x\n", unpacked);    // expect 0x00fc_00fe
    asm volatile("mnn.exthz.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights3));
    printf("unpacked[mnn.exthz.b32] = %08x\n", unpacked);    // expect 0x00fc_00fd

    asm volatile("mnn.exthz.b10 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b10] = %08x\n", unpacked);    // expect 0x0082_0083
    asm volatile("mnn.exthz.b20 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b20] = %08x\n", unpacked);    // expect 0x0081_0083
    asm volatile("mnn.exthz.b30 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b30] = %08x\n", unpacked);    // expect 0x0080_0083
    asm volatile("mnn.exthz.b21 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b21] = %08x\n", unpacked);    // expect 0x0081_0082
    asm volatile("mnn.exthz.b31 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b31] = %08x\n", unpacked);    // expect 0x0080_0082
    asm volatile("mnn.exthz.b32 %0, %1" : "=r" (unpacked) : "r" (v4i8weights4));
    printf("unpacked[mnn.exthz.b32] = %08x\n", unpacked);    // expect 0x0080_0081
}
