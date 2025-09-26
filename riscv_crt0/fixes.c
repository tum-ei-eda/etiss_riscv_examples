#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/timeb.h>

#include "csr.h"

#define US_PER_S 1000000

// get seconds since epoch using time CSR
// ETISS RISC-V time CSR contains unix time in micro seconds (us)
int _gettimeofday(struct timeval *tv, void *_)
{
    uint64_t us = rdtime64();

    tv->tv_sec = us / US_PER_S;
    tv->tv_usec = us % US_PER_S;
    return 0;
}

#ifdef USE_SYS_EXIT_EXTENDED
#include <machine/syscall.h>
#include "semihost_syscall.h"

#define ADP_Stopped_ApplicationExit 0x20026

/* Exit a program without cleaning up files.  */
void
_exit (int exit_status)
{
#if __riscv_xlen == 32
  // syscall_errno (SEMIHOST_exit, (long *) ADP_Stopped_ApplicationExit);
  long data_block[] = {ADP_Stopped_ApplicationExit, exit_status};
  syscall_errno (SEMIHOST_exit_extended, data_block);
#else
  /* The semihosting exit operation only allows 64-bit targets to report the
     exit code.  */
  long data_block[] = {ADP_Stopped_ApplicationExit, exit_status};
  syscall_errno (SEMIHOST_exit, data_block);
#endif
  while (1);
}
#endif  // USE_SYS_EXIT_EXTENDED
