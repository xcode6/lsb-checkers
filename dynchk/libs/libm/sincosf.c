// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <math.h>
#undef sincosf
static void(*funcptr) (float , float * , float * ) = 0;

extern int __lsb_check_params;
void sincosf (float arg0 , float * arg1 , float * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for sincosf()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.1");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.1");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sincosf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sincosf() - validating");
		validate_NULL_TYPETYPE(  arg0, "sincosf - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "sincosf - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "sincosf - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "sincosf - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "sincosf - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

