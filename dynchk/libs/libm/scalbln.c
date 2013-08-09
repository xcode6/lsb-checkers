// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <math.h>
#undef scalbln
static double(*funcptr) (double , long int ) = 0;

extern int __lsb_check_params;
double scalbln (double arg0 , long int arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	__lsb_output(4, "Invoking wrapper for scalbln()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load scalbln. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "scalbln() - validating");
		validate_NULL_TYPETYPE(  arg0, "scalbln - arg0");
		validate_NULL_TYPETYPE(  arg1, "scalbln - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

