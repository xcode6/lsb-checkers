// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcscmp
static int(*funcptr) (const wchar_t * , const wchar_t * ) = 0;

extern int __lsb_check_params;
int wcscmp (const wchar_t * arg0 , const wchar_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscmp");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "wcscmp - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcscmp - arg0");
	validate_Rdaddress( arg1, "wcscmp - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcscmp - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

