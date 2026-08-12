#include <stdint.h>
#include <stddef.h>
#include <errno.h>
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


int _getentropy(void *buf, size_t buflen)
{
    (void)buf;
    (void)buflen;
    errno = ENOSYS;
    return -1;
}
