// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <execinfo.h>
#undef backtrace_symbols
static char * *(*funcptr) (void *const  * , int ) = 0;

extern int __lsb_check_params;
char * * backtrace_symbols (void *const  * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	char * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for backtrace_symbols()");
	if(!funcptr)
		#if defined __i386__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.1");
		#endif
		#if defined __ia64__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.2");
		#endif
		#if defined __powerpc__ && !defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.1");
		#endif
		#if defined __powerpc64__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.3");
		#endif
		#if defined __s390__ && !defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.1");
		#endif
		#if defined __x86_64__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.2.5");
		#endif
		#if defined __s390x__
			funcptr = dlvsym(RTLD_NEXT, "backtrace_symbols", "GLIBC_2.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load backtrace_symbols. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "backtrace_symbols() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "backtrace_symbols - arg0 (__array)");
		}
		validate_NULL_TYPETYPE(  arg0, "backtrace_symbols - arg0 (__array)");
		validate_NULL_TYPETYPE(  arg1, "backtrace_symbols - arg1 (__size)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

