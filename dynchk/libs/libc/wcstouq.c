// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstouq
static unsigned long long(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
unsigned long long wcstouq (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	unsigned long long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstouq");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcstouq()");
	validate_Rdaddress( arg0, "wcstouq - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstouq - arg0");
	validate_RWaddress( arg1, "wcstouq - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstouq - arg1");
		validate_NULL_TYPETYPE(  arg2, "wcstouq - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

