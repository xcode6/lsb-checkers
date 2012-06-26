// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdint.h>
#include <inttypes.h>
#undef imaxdiv
static imaxdiv_t(*funcptr) (intmax_t , intmax_t ) = 0;

extern int __lsb_check_params;
imaxdiv_t imaxdiv (intmax_t arg0 , intmax_t arg1 )
{
	int reset_flag = __lsb_check_params;
	imaxdiv_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for imaxdiv()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.1.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.1.1");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.1.1");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "imaxdiv", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load imaxdiv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "imaxdiv() - validating");
		validate_NULL_TYPETYPE(  arg0, "imaxdiv - arg0 (__numer)");
		validate_NULL_TYPETYPE(  arg1, "imaxdiv - arg1 (__denom)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

