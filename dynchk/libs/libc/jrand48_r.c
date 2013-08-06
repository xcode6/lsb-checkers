// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef jrand48_r
static int(*funcptr) (unsigned short [], struct drand48_data * , long int * ) = 0;

extern int __lsb_check_params;
int jrand48_r (unsigned short arg0 [3], struct drand48_data * arg1 , long int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for jrand48_r()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "jrand48_r", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jrand48_r. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jrand48_r() - validating");
		validate_NULL_TYPETYPE(  arg0, "jrand48_r - arg0 (__xsubi)");
		if( arg1 ) {
		validate_RWaddress( arg1, "jrand48_r - arg1 (__buffer)");
		}
		validate_NULL_TYPETYPE(  arg1, "jrand48_r - arg1 (__buffer)");
		if( arg2 ) {
		validate_RWaddress( arg2, "jrand48_r - arg2 (__result)");
		}
		validate_NULL_TYPETYPE(  arg2, "jrand48_r - arg2 (__result)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

