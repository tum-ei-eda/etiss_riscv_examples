/*

        @copyright

        <pre>

        Copyright 2018 Infineon Technologies AG

        This file is part of ETISS tool, see <https://github.com/tum-ei-eda/etiss>.

        The initial version of this software has been created with the funding support by the German Federal
        Ministry of Education and Research (BMBF) in the project EffektiV under grant 01IS13022.

        Redistribution and use in source and binary forms, with or without modification, are permitted
        provided that the following conditions are met:

        1. Redistributions of source code must retain the above copyright notice, this list of conditions and
        the following disclaimer.

        2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
        and the following disclaimer in the documentation and/or other materials provided with the distribution.

        3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse
        or promote products derived from this software without specific prior written permission.

        THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
        WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
        PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
        DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
        PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
        HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
        NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
        POSSIBILITY OF SUCH DAMAGE.

        </pre>

        @author Chair of Electronic Design Automation, TUM

        @version 0.1

*/

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
static union
{
    uint32_t as_ui;
    struct
    {
        uint16_t low_hw;
        uint16_t high_hw;
    } as_hwds;
    struct
    {
        uint8_t LSB;
        uint8_t SLSB;
        uint8_t SMSB;
        uint8_t MSB;
    } as_bytes;
} test_union;
#elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
static union
{
    uint32_t as_ui;
    struct
    {
        uint16_t high_hw;
        uint16_t low_hw;
    } as_hwds;
    struct
    {
        uint8_t MSB;
        uint8_t SMSB;
        uint8_t SLSB;
        uint8_t LSB;
    } as_bytes;
} test_union;
#else
#error __BYTE_ORDER__ macro is not defined
#endif

void endianness_test()
{
    printf("\n\n=========    Endianness test    ============\n");
    printf("\nWrite tests:\n");

    test_union.as_ui = 0x11223344;
    printf("   Writing 0x11223344 as 32-bit, reading 0x%08X\n", test_union.as_ui);

    printf("\n  16 Bit:\n");

    test_union.as_hwds.high_hw = 0xAABB;
    printf("    Wrote 0xAABB to high halfword (4-byte aligned), reading 0x%08X (should be 0xAABB3344)\n",
           test_union.as_ui);
    if (test_union.as_ui != 0xAABB3344)
        printf("\n ERROR in endianess behaviour (write high half word) \n\n");

    test_union.as_hwds.low_hw = 0xCCDD;
    printf("    Wrote 0xCCDD to low halfword (2-byte aligned), reading 0x%08X (should be 0xAABBCCDD)\n",
           test_union.as_ui);
    if (test_union.as_ui != 0xAABBCCDD)
        printf("\n ERROR in endianess behaviour (write low half word)\n\n");

    printf("  8 Bit:\n");

    test_union.as_bytes.MSB = 0x11;
    printf("    Wrote 0x11 to MSB (4-byte aligned), reading 0x%08X (should be 0x11BBCCDD)\n", test_union.as_ui);
    if (test_union.as_ui != 0x11BBCCDD)
        printf("\n ERROR in endianess behaviour (write MSB)\n\n");

    test_union.as_bytes.SMSB = 0x22;
    printf("    Wrote 0x22 to Second-MSB (byte aligned), reading 0x%08X (should be 0x1122CCDD)\n", test_union.as_ui);
    if (test_union.as_ui != 0x1122CCDD)
        printf("\n ERROR in endianess behaviour (write 2MSB)\n\n");

    test_union.as_bytes.SLSB = 0x33;
    printf("    Wrote 0x33 to Second-LSB (2-byte aligned), reading 0x%08X (should be 0x112233DD)\n", test_union.as_ui);
    if (test_union.as_ui != 0x112233DD)
        printf("\n ERROR in endianess behaviour (write 2LSB)\n\n");

    test_union.as_bytes.LSB = 0x44;
    printf("    Wrote 0x44 to LSB (byte aligned), reading 0x%08X (should be 0x11223344)\n", test_union.as_ui);
    if (test_union.as_ui != 0x11223344)
        printf("\n ERROR in endianess behaviour (write LSB)\n\n");

    printf("\nRead tests:\n");
    printf("  16 Bit:\n");

    printf("    Reading high halfword: ");
    printf("0x%04X", test_union.as_hwds.high_hw);

    printf("\n    Reading low halfword: ");
    printf("0x%04X", test_union.as_hwds.low_hw);

    printf("\n\n  8 Bit:");
    printf("\n    Reading MSB: ");
    printf("0x%02X", test_union.as_bytes.MSB);

    printf("\n    Reading Second-MSB: ");
    printf("0x%02X", test_union.as_bytes.SMSB);

    printf("\n    Reading Second-LSB: ");
    printf("0x%02X", test_union.as_bytes.SLSB);

    printf("\n    Reading LSB: ");
    printf("0x%02X", test_union.as_bytes.LSB);

    printf("\n\n");
}
