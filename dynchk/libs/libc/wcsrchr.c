// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsrchr
static wchar_t *(*funcptr) (const wchar_t * , wchar_t ) = 0;

extern int __lsb_check_params;
wchar_t * wcsrchr (const wchar_t * arg0 , wchar_t arg1 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "wcsrchr", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcsrchr()");
		validate_Rdaddress( arg0, "wcsrchr - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcsrchr - arg0");
		validate_NULL_TYPETYPE(  arg1, "wcsrchr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

