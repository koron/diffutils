/* config.h for emx and OS/2  */


/* Define if using alloca.c.  */
#undef C_ALLOCA

/* Define if the closedir function returns void instead of int.  */
#undef CLOSEDIR_VOID

/* Define to empty if the keyword does not work.  */
#undef const

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
#undef CRAY_STACKSEG_END

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#undef HAVE_ALLOCA_H

/* Define if you don't have vprintf but do have _doprnt.  */
#undef HAVE_DOPRNT

/* Define if your struct stat has st_blksize.  */
#undef HAVE_ST_BLKSIZE

/* Define if you have <vfork.h>.  */
#undef HAVE_VFORK_H

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define if on MINIX.  */
#undef _MINIX

/* Define to `int' if <sys/types.h> doesn't define.  */
#define pid_t int

/* Define if the system does not provide POSIX.1 features except
   with this defined.  */
#undef _POSIX_1_SOURCE

/* Define if you need to in order for stat and other things to work.  */
#undef _POSIX_SOURCE

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown
 */
#undef STACK_DIRECTION

/* Define if the `S_IS*' macros in <sys/stat.h> do not work properly.  */
#undef STAT_MACROS_BROKEN

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define vfork as fork if vfork does not work.  */
#define vfork fork

/* Define if you have the dup2 function.  */
#define HAVE_DUP2 1

/* Define if you have the memchr function.  */
#define HAVE_MEMCHR 1

/* Define if you have the sigaction function.  */
#undef HAVE_SIGACTION

/* Define if you have the strchr function.  */
#define HAVE_STRCHR 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <ndir.h> header file.  */
#undef HAVE_NDIR_H

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <sys/dir.h> header file.  */
#define HAVE_SYS_DIR_H 1

/* Define if you have the <sys/file.h> header file.  */
#define HAVE_SYS_FILE_H 1

/* Define if you have the <sys/ndir.h> header file.  */
#undef HAVE_SYS_NDIR_H

/* Define if you have the <sys/wait.h> header file.  */
#define HAVE_SYS_WAIT_H 1

/* Define if you have the <time.h> header file.  */
#define HAVE_TIME_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1


/* emx and/or OS/2 specific definitions */

#define DIFF_PROGRAM "diff.exe"

#define filename_cmp(a, b) stricmp (a, b)

#define filename_lastdirchar(filename) os2_filename_lastdirchar (filename)
char *os2_filename_lastdirchar (char const *);

#define HAVE_FORK 0

#define HAVE_SETMODE 1

#define initialize_main(pargc, pargv) os2_initialize_main (pargc, pargv)
void os2_initialize_main (int *, char ***);

#define PVT_tmpdir ""

#define same_file(s,t) (-1)

#define STAT_BLOCKSIZE(s) (64 * 1024)

#include <process.h>