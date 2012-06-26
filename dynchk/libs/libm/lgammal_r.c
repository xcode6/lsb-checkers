// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <math.h>
#undef lgammal_r
static long double(*funcptr) (long double , int * ) = 0;

extern int __lsb_check_params;
long double lgammal_r (long double arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	__lsb_output(4, "Invoking wrapper for lgammal_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.4");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.3");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.4");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.4");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "lgammal_r", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load lgammal_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lgammal_r() - validating");
		validate_NULL_TYPETYPE(  arg0, "lgammal_r - arg0");
		validate_RWaddress( arg1, "lgammal_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "lgammal_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

