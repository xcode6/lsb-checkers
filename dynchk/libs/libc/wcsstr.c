// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef wcsstr
static wchar_t *(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
wchar_t * wcsstr (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for wcsstr()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "wcsstr", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load wcsstr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcsstr() - validating");
		validate_Rdaddress( arg0, "wcsstr - arg0 (__haystack)");
		validate_NULL_TYPETYPE(  arg0, "wcsstr - arg0 (__haystack)");
		validate_Rdaddress( arg1, "wcsstr - arg1 (__needle)");
		validate_NULL_TYPETYPE(  arg1, "wcsstr - arg1 (__needle)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

