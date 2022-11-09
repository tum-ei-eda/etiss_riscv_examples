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

#include <stdio.h>

unsigned int isqrt2(int x)
{
    unsigned int bit, rest, root = 0;
    if (x < 0)
        return 0;

    bit = (unsigned int)0x40000000;
    rest = (unsigned int)x;
    root = 0;

    while (bit > 0) {
        if (rest >= (bit | root)) {
            rest = rest - (bit | root);
            root = root >> 1;
            root = root | bit;
        } else {
            root = root >> 1;
        }
        bit = bit >> 2;
    }
    return root;
}

void test_qrt()
{
    int m1;
    int m2;
    m1 = 1024;
    m2 = 430336;

    if (isqrt2(m1) != 32) {
        printf("qrt1 failed: ");
        printf("%016x\n", isqrt2(m1));
    } else {
        printf("qrt1 success!\n");
    }
    if (isqrt2(m2) != 656) {
        printf("qrt2 failed: ");
        printf("%016x\n", isqrt2(m2));
    } else {
        printf("qrt2 success!\n");
    }
}

void test_mul()
{

    int m1;
    int m2;

    m1 = 3567;
    m2 = 56454;

    if (m1 * m2 != 201371418) {
        printf("mul1 failed: ");
        printf("%016x\n", m1 * m2);

    } else {
        printf("mul1 success!\n");
    }

    m1 = 3567;
    m2 = -56454;

    if (m1 * m2 != -201371418) {
        printf("mul2 failed: ");
        printf("%016x\n", m1 * m2);

    } else {
        printf("mul2 success!\n");
    }
}

void test_div()
{

    int m1;
    int m2;

    m1 = 201371418;
    m2 = -56454;

    if (m1 / m2 != -3567) {
        printf("div1 failed: ");
        printf("%016x\n", m1 / m2);

    } else {
        printf("div1 success!\n");
    }

    m1 = 201371418;
    m2 = 56454;

    if (m1 / m2 != 3567) {
        printf("div2 failed: ");
        printf("%016x\n", m1 / m2);

    } else {
        printf("div2 success!\n");
    }
}

void test_fmul()
{

    float m1;
    float m2;

    m1 = 3.4375;
    m2 = 5.3125;

    if (m1 * m2 != 18.26171875f) {
        printf("fmul1 failed: ");
        printf("%f\n", m1 * m2);

    } else {
        printf("fmul1 success!\n");
    }

    m1 = -3.4375;
    m2 = 5.3125;

    if (m1 * m2 != -18.26171875f) {
        printf("fmul2 failed: ");
        printf("%f\n", m1 * m2);

    } else {
        printf("fmul2 success!\n");
    }
}

void test_fdiv()
{

    float m1;
    float m2;

    m1 = 4.153968;
    m2 = 5.3256;

    if (m1 / m2 != 0.78f) {
        printf("fdiv1 failed: ");
        printf("%f\n", m1 / m2);

    } else {
        printf("fdiv1 success!\n");
    }

    m1 = -4.153968;
    m2 = 5.3256;

    if (m1 / m2 != -0.78f) {
        printf("fdiv2 failed: ");
        printf("%f\n", m1 / m2);

    } else {
        printf("fdiv2 success!\n");
    }

    m1 = 8.470875;
    m2 = 3.4575;

    if (m1 / m2 != 2.45f) {
        printf("fdiv3 failed: ");
        printf("%f\n", m1 / m2);

    } else {
        printf("fdiv3 success!\n");
    }
}

void test_shift()
{

    int m1;
    int m2;

    m1 = 3;
    m2 = 5;

    if (((m1 << m2) >> 6) != 1) {
        printf("shift failed: ");
        printf("%016x\n", ((m1 << m2) >> 6));

    } else {
        printf("shift success!\n");
    }
}

void test()
{
    printf("simple tests called!\n");

    test_qrt();
    test_mul();
    test_div();
    test_fmul();
    test_fdiv();
    test_shift();
}
