// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <stdlib.h>
#undef mbstowcs
static size_t(*funcptr) (wchar_t * , const char * , size_t ) = 0;

extern int __lsb_check_params;
size_t mbstowcs (wchar_t * arg0 , const char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for mbstowcs()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "mbstowcs", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mbstowcs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mbstowcs() - validating");
		validate_RWaddress( arg0, "mbstowcs - arg0 (__pwcs)");
		validate_NULL_TYPETYPE(  arg0, "mbstowcs - arg0 (__pwcs)");
		validate_Rdaddress( arg1, "mbstowcs - arg1 (__s)");
		validate_NULL_TYPETYPE(  arg1, "mbstowcs - arg1 (__s)");
		validate_NULL_TYPETYPE(  arg2, "mbstowcs - arg2 (__n)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

