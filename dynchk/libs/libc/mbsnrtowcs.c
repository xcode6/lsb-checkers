// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wctype.h>
#include <wchar.h>
#undef mbsnrtowcs
static size_t(*funcptr) (wchar_t * , const char * * , size_t , size_t , mbstate_t * ) = 0;

extern int __lsb_check_params;
size_t mbsnrtowcs (wchar_t * arg0 , const char * * arg1 , size_t arg2 , size_t arg3 , mbstate_t * arg4 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for mbsnrtowcs()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.0");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.0");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "mbsnrtowcs", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load mbsnrtowcs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mbsnrtowcs() - validating");
		validate_RWaddress( arg0, "mbsnrtowcs - arg0 (__dst)");
		validate_NULL_TYPETYPE(  arg0, "mbsnrtowcs - arg0 (__dst)");
		validate_RWaddress( arg1, "mbsnrtowcs - arg1 (__src)");
		validate_NULL_TYPETYPE(  arg1, "mbsnrtowcs - arg1 (__src)");
		validate_NULL_TYPETYPE(  arg2, "mbsnrtowcs - arg2 (__nmc)");
		validate_NULL_TYPETYPE(  arg3, "mbsnrtowcs - arg3 (__len)");
		validate_RWaddress( arg4, "mbsnrtowcs - arg4 (__ps)");
		validate_NULL_TYPETYPE(  arg4, "mbsnrtowcs - arg4 (__ps)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

