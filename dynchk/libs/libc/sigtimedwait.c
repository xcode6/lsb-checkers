// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <signal.h>
#include <sys/time.h>
#undef sigtimedwait
static int(*funcptr) (const sigset_t * , siginfo_t * , const struct timespec * ) = 0;

extern int __lsb_check_params;
int sigtimedwait (const sigset_t * arg0 , siginfo_t * arg1 , const struct timespec * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for sigtimedwait()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.1");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.1");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sigtimedwait", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sigtimedwait. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigtimedwait() - validating");
		validate_Rdaddress( arg0, "sigtimedwait - arg0 (__set)");
		validate_NULL_TYPETYPE(  arg0, "sigtimedwait - arg0 (__set)");
		validate_RWaddress( arg1, "sigtimedwait - arg1 (__info)");
		validate_NULL_TYPETYPE(  arg1, "sigtimedwait - arg1 (__info)");
		validate_Rdaddress( arg2, "sigtimedwait - arg2 (__timeout)");
		validate_NULL_TYPETYPE(  arg2, "sigtimedwait - arg2 (__timeout)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

