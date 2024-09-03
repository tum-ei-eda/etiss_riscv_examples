#include <stdio.h>

int main() {
  // Non-ISAX canary instruction, to flag an unwanted case of endian/width/compression/whatever
  asm("add x3, x4, x5");

  asm("s4e.reset_acc");

  asm("s4e.get_acc_lo x6");

  asm("s4e.get_acc_hi x25");

  asm("s4e.macu_32 x21, x17");

  asm("s4e.macs_32 x21, x17");

  asm("s4e.macu_64 x21, x17");

  asm("s4e.macs_64 x21, x17");

  return 42;
}
