/* Generated file */
#include "libs.h"

#include "../tetj/tetj.h"

extern void check_lib(char *libname, struct versym entries[], struct tetj_handle *journal);
void check_libs(struct tetj_handle *journal)
{
#if defined(__powerpc64__)
check_lib("/lib/ld-lsb-64.so.1",ld_lsb_64_so_1, journal);
#endif
#if defined(__ia64__)
check_lib("/lib/ld-lsb-ia64.so.1",ld_lsb_ia64_so_1, journal);
#endif
#if defined(__i386__)
check_lib("/lib/ld-lsb.so.1",ld_lsb_so_1, journal);
#endif
#if defined(__powerpc__)
check_lib("/lib/ld-lsb.so.1",ld_lsb_so_1, journal);
#endif
#if defined(__i386__)
check_lib("libc.so.6",libc_so_6, journal);
#endif
#if defined(__powerpc__)
check_lib("libc.so.6",libc_so_6, journal);
#endif
#if defined(__powerpc64__)
check_lib("libc.so.6",libc_so_6, journal);
#endif
#if defined(__ia64__)
check_lib("libc.so.6.1",libc_so_6_1, journal);
#endif
check_lib("libcrypt.so.1",libcrypt_so_1,journal);
#if defined(__i386__)
check_lib("libcrypt.so.1",libcrypt_so_1, journal);
#endif
#if defined(__ia64__)
check_lib("libcrypt.so.1",libcrypt_so_1, journal);
#endif
#if defined(__powerpc__)
check_lib("libcrypt.so.1",libcrypt_so_1, journal);
#endif
#if defined(__powerpc64__)
check_lib("libcrypt.so.1",libcrypt_so_1, journal);
#endif
check_lib("libdl.so.2",libdl_so_2,journal);
#if defined(__i386__)
check_lib("libdl.so.2",libdl_so_2, journal);
#endif
#if defined(__ia64__)
check_lib("libdl.so.2",libdl_so_2, journal);
#endif
#if defined(__powerpc__)
check_lib("libdl.so.2",libdl_so_2, journal);
#endif
#if defined(__powerpc64__)
check_lib("libdl.so.2",libdl_so_2, journal);
#endif
check_lib("libgcc_s.so.1",libgcc_s_so_1,journal);
check_lib("libGL.so.1",libGL_so_1,journal);
check_lib("libICE.so.6",libICE_so_6,journal);
#if defined(__i386__)
check_lib("libm.so.6",libm_so_6, journal);
#endif
#if defined(__powerpc__)
check_lib("libm.so.6",libm_so_6, journal);
#endif
#if defined(__powerpc64__)
check_lib("libm.so.6",libm_so_6, journal);
#endif
#if defined(__ia64__)
check_lib("libm.so.6.1",libm_so_6_1, journal);
#endif
check_lib("libncurses.so.5",libncurses_so_5,journal);
check_lib("libpam.so.0",libpam_so_0,journal);
check_lib("libpthread.so.0",libpthread_so_0,journal);
#if defined(__i386__)
check_lib("libpthread.so.0",libpthread_so_0, journal);
#endif
#if defined(__ia64__)
check_lib("libpthread.so.0",libpthread_so_0, journal);
#endif
#if defined(__powerpc__)
check_lib("libpthread.so.0",libpthread_so_0, journal);
#endif
#if defined(__powerpc64__)
check_lib("libpthread.so.0",libpthread_so_0, journal);
#endif
check_lib("libSM.so.6",libSM_so_6,journal);
check_lib("libstdc++.so.5",libstdcxx_so_5,journal);
check_lib("libutil.so.1",libutil_so_1,journal);
check_lib("libX11.so.6",libX11_so_6,journal);
check_lib("libXext.so.6",libXext_so_6,journal);
check_lib("libXt.so.6",libXt_so_6,journal);
check_lib("libz.so.1",libz_so_1,journal);
}
