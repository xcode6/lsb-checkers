// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef __wcstol_internal
static long(*funcptr) (const wchar_t * , wchar_t * * , int , int ) = 0;

extern int __lsb_check_params;
long __wcstol_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstol_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "__wcstol_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__wcstol_internal - arg0");
	validate_Rdaddress( arg1, "__wcstol_internal - arg1");
	validate_Rdaddress(* arg1, "__wcstol_internal - arg1");
		validate_NULL_TYPETYPE(  arg1, "__wcstol_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__wcstol_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__wcstol_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

