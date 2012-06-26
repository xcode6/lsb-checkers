// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/types.h>
#include <time.h>
#undef timer_gettime
static int(*funcptr) (timer_t , struct itimerspec * ) = 0;

extern int __lsb_check_params;
int timer_gettime (timer_t arg0 , struct itimerspec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for timer_gettime()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.3.3");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.2");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.3.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.3.3");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "timer_gettime", "GLIBC_2.3.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load timer_gettime. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "timer_gettime() - validating");
		validate_NULL_TYPETYPE(  arg0, "timer_gettime - arg0 (__timerid)");
		validate_RWaddress( arg1, "timer_gettime - arg1 (__value)");
		validate_NULL_TYPETYPE(  arg1, "timer_gettime - arg1 (__value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

