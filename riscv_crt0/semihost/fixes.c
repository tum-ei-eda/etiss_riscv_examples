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
#include <sys/fcntl.h>
#include <string.h>
#include <machine/syscall.h>
#include "semihost_syscall.h"
#include "semihost_fdtable.h"

#define ADP_Stopped_ApplicationExit 0x20026

/* Semihosting feature magic numbers.  */
#define NUM_SHFB_MAGIC                  4
#define SHFB_MAGIC_0                    0x53
#define SHFB_MAGIC_1                    0x48
#define SHFB_MAGIC_2                    0x46
#define SHFB_MAGIC_3                    0x42

/* Semihosting extensions.  */
#define SH_EXT_EXIT_EXTENDED_BITNUM     0x0
#define SH_EXT_STDOUT_STDERR_BITNUM     0x1

static int supports_ext_exit_extended = -1;
static int supports_ext_stdout_stderr = -1;

int _open (const char *name, int flags, ...);
int _close (int file);
ssize_t _read (int file, void *ptr, size_t len);
off_t _lseek (int file, off_t offset, int dir);
int _fstat (int file, struct stat *st);
// struct fdentry *__get_fdentry (int file);

int
_get_semihosting_exts (char* features, int offset, int num)
{
  long len;
  struct fdentry *pfd;
  int fd = _open (":semihosting-features", O_RDONLY);
  memset (features, 0, num);

  if (fd == -1)
  {
    return -1;
  }

  struct stat st;
  _fstat (fd, &st);
  len = st.st_size;

  if (len < NUM_SHFB_MAGIC
      || num > (len - NUM_SHFB_MAGIC))
  {
     _close (fd);
     return -1;
  }

  char buffer[NUM_SHFB_MAGIC];
  int n_read = _read (fd, buffer, NUM_SHFB_MAGIC);

  if (n_read < NUM_SHFB_MAGIC
      || buffer[0] != SHFB_MAGIC_0
      || buffer[1] != SHFB_MAGIC_1
      || buffer[2] != SHFB_MAGIC_2
      || buffer[3] != SHFB_MAGIC_3)
  {
     _close (fd);
     return -1;
  }

  if (_lseek (fd, offset, SEEK_CUR) < 0)
  {
     _close (fd);
     return -1;
  }

  n_read = _read (fd, features, num);

  _close (fd);

  return n_read;
}

static void
initialise_semihosting_exts (void)
{
  supports_ext_exit_extended = 0;
  supports_ext_stdout_stderr = 1;

  char features[1];
  if (_get_semihosting_exts (features, 0, 1) > 0)
  {
     supports_ext_exit_extended
       = features[0] & (1 << SH_EXT_EXIT_EXTENDED_BITNUM);
     supports_ext_stdout_stderr
       = features[0] & (1 << SH_EXT_STDOUT_STDERR_BITNUM);
  }
}

int
_has_ext_exit_extended (void)
{
  if (supports_ext_exit_extended < 0)
  {
    initialise_semihosting_exts ();
  }

  return supports_ext_exit_extended;
}

/* Exit a program without cleaning up files.  */
void
_exit (int exit_status)
{
  // syscall_errno (SEMIHOST_exit, (long *) ADP_Stopped_ApplicationExit);
  long data_block[] = {ADP_Stopped_ApplicationExit, exit_status};
#if __riscv_xlen == 32
  // if (1)
  if (_has_ext_exit_extended ())
  {
      syscall_errno (SEMIHOST_exit_extended, data_block);
  }
  else
  {
      syscall_errno (SEMIHOST_exit, (long *) ADP_Stopped_ApplicationExit);
  }
#else
  syscall_errno (SEMIHOST_exit, data_block);
#endif
  while (1);
}
#endif  // USE_SYS_EXIT_EXTENDED

