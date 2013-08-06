// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sys/time.h>
#undef setitimer
static int(*funcptr) (__itimer_which_t , const struct itimerval * , struct itimerval * ) = 0;

extern int __lsb_check_params;
int setitimer (__itimer_which_t arg0 , const struct itimerval * arg1 , struct itimerval * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for setitimer()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "setitimer", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load setitimer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setitimer() - validating");
		validate_NULL_TYPETYPE(  arg0, "setitimer - arg0 (__which)");
		validate_Rdaddress( arg1, "setitimer - arg1 (__new)");
		validate_NULL_TYPETYPE(  arg1, "setitimer - arg1 (__new)");
		validate_RWaddress( arg2, "setitimer - arg2 (__old)");
		validate_NULL_TYPETYPE(  arg2, "setitimer - arg2 (__old)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

