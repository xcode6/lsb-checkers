// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <envz.h>
#undef envz_get
static char(*funcptr) (const char * , size_t , const char * ) = 0;

extern int __lsb_check_params;
char envz_get (const char * arg0 , size_t arg1 , const char * arg2 )
{
	int reset_flag = __lsb_check_params;
	char ret_value  ;
	__lsb_output(4, "Invoking wrapper for envz_get()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "envz_get", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load envz_get. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "envz_get() - validating");
		validate_Rdaddress( arg0, "envz_get - arg0 (envz)");
		validate_NULL_TYPETYPE(  arg0, "envz_get - arg0 (envz)");
		validate_NULL_TYPETYPE(  arg1, "envz_get - arg1 (envz_len)");
		validate_Rdaddress( arg2, "envz_get - arg2 (name)");
		validate_NULL_TYPETYPE(  arg2, "envz_get - arg2 (name)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
