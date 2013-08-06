// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vfwprintf
static int(*funcptr) (FILE * , const wchar_t * , va_list ) = 0;

extern int __lsb_check_params;
int vfwprintf (FILE * arg0 , const wchar_t * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for vfwprintf()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.3");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.4");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.4");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.4");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "vfwprintf", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load vfwprintf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vfwprintf() - validating");
		validate_RWaddress( arg0, "vfwprintf - arg0 (__s)");
		validate_NULL_TYPETYPE(  arg0, "vfwprintf - arg0 (__s)");
		validate_Rdaddress( arg1, "vfwprintf - arg1 (__format)");
		validate_NULL_TYPETYPE(  arg1, "vfwprintf - arg1 (__format)");
		validate_NULL_TYPETYPE(  arg2, "vfwprintf - arg2 (__arg)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

