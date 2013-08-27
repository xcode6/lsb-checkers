// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/wchar.h>
#include <wchar.h>
#include <wctype.h>
#undef towctrans
static wint_t(*funcptr) (wint_t , wctrans_t ) = 0;

extern int __lsb_check_params;
wint_t towctrans (wint_t arg0 , wctrans_t arg1 )
{
	int reset_flag = __lsb_check_params;
	wint_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for towctrans()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.0");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.0");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.0");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.2");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.2");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.2.5");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "towctrans", "GLIBC_2.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load towctrans. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "towctrans() - validating");
		validate_NULL_TYPETYPE(  arg0, "towctrans - arg0 (__wc)");
		validate_NULL_TYPETYPE(  arg1, "towctrans - arg1 (__desc)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

