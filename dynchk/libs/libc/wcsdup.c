// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsdup
static wchar_t *(*funcptr) (const wchar_t * ) = 0;

extern int __lsb_check_params;
wchar_t * wcsdup (const wchar_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsdup");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "wcsdup - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcsdup - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

