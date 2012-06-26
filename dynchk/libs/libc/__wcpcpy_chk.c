// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stddef.h>
#include <wchar.h>
#undef __wcpcpy_chk
static wchar_t *(*funcptr) (wchar_t * , const wchar_t * , size_t ) = 0;

extern int __lsb_check_params;
wchar_t * __wcpcpy_chk (wchar_t * arg0 , const wchar_t * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for __wcpcpy_chk()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "__wcpcpy_chk", "GLIBC_2.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load __wcpcpy_chk. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__wcpcpy_chk() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "__wcpcpy_chk - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "__wcpcpy_chk - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "__wcpcpy_chk - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "__wcpcpy_chk - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcpcpy_chk - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

