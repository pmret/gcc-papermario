/* Configuration for GCC for AArch64 running macOS (Apple Silicon).  */

#include <alloca.h>

/* #defines that need visibility everywhere.  */
#define FALSE 0
#define TRUE 1

/* This describes the machine the compiler is hosted on.  */
#define HOST_BITS_PER_CHAR 8
#define HOST_BITS_PER_SHORT 16
#define HOST_BITS_PER_INT 32
#define HOST_BITS_PER_LONG 64
#define HOST_BITS_PER_LONGLONG 64

/* Arguments to use with `exit'.  */
#define SUCCESS_EXIT_CODE 0
#define FATAL_EXIT_CODE 33

/* target machine dependencies.
   tm.h is a symbolic link to the actual target specific file.   */
#include "tm.h"
