#include <stdio.h>
#include <stdint.h>


int32_t add_large_imm(int32_t x)
{
    // const uint32_t c = 0x100000;
    const uint32_t c = 0x100001;
    return x + c;
}

int32_t add_large_imm2(int32_t x)
{
    int32_t res;
    // const uint32_t c = 0x100000;
    // const uint32_t c = 0x100001;
    // k.addi x5, x6, 0x100000
    // k.addi x5, x6, 0x100001
    asm volatile (
        "mv x6, %1\n\t"       // Move x into x6
        ".insn 0x6, 0x1100001302df\n\t"  // Custom 48-bit instruction
        "mv %0, x5"           // Store result back into res
        : "=r"(res)           // Output operand
        : "r"(x)      // Input operands
        : "x5", "x6"          // Clobbered registers
    );
    return res;
}

int main()
{
    printf("Hello world!\n");
    // asm(".insn 0x4, 0x13");

    // TODO: check negative, too
    volatile const int32_t a = 32;
    int32_t res1 = add_large_imm(a);
    printf("res1=%d\n", res1);
    int32_t res2 = add_large_imm2(a);
    printf("res2=%d\n", res2);

    printf("Bye world!\n");
}
