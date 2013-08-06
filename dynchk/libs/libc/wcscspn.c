// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef wcscspn
static size_t(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
size_t wcscspn (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcscspn()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcscspn", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcscspn. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcscspn() - validating");
		validate_Rdaddress( arg0, "wcscspn - arg0 (__wcs)");
		validate_NULL_TYPETYPE(  arg0, "wcscspn - arg0 (__wcs)");
		validate_Rdaddress( arg1, "wcscspn - arg1 (__reject)");
		validate_NULL_TYPETYPE(  arg1, "wcscspn - arg1 (__reject)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

