// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef __wcstof_internal
static float(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

extern int __lsb_check_params;
float __wcstof_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstof_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "__wcstof_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__wcstof_internal - arg0");
	validate_Rdaddress( arg1, "__wcstof_internal - arg1");
	validate_Rdaddress(* arg1, "__wcstof_internal - arg1");
		validate_NULL_TYPETYPE(  arg1, "__wcstof_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcstof_internal - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

