#include <stdio.h>

int main() {
  // Non-ISAX canary instruction, to flag an unwanted case of endian/width/compression/whatever
  asm("add x3, x4, x5");

  asm("reset_acc");

  asm("get_acc_lo x6");

  asm("get_acc_hi x25");

  asm("macu_32 x21, x17");

  asm("macs_32 x21, x17");

  asm("macu_64 x21, x17");

  asm("macs_64 x21, x17");

  return 42;
}
