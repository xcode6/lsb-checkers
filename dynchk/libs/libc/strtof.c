// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdlib.h>
#undef strtof
static float(*funcptr) (const char * , char * * ) = 0;

extern int __lsb_check_params;
float strtof (const char * arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	__lsb_output(4, "Invoking wrapper for strtof()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load strtof. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtof() - validating");
		validate_Rdaddress( arg0, "strtof - arg0 (__nptr)");
		validate_NULL_TYPETYPE(  arg0, "strtof - arg0 (__nptr)");
		validate_RWaddress( arg1, "strtof - arg1 (__endptr)");
		validate_NULL_TYPETYPE(  arg1, "strtof - arg1 (__endptr)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

