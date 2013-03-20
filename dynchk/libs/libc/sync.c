// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <unistd.h>
#undef sync
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void sync ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for sync()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sync", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sync. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sync() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

