// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcstok
static wchar_t *(*funcptr) (wchar_t * , const wchar_t * , wchar_t * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
wchar_t * wcstok (wchar_t * arg0 , const wchar_t * arg1 , wchar_t * * arg2 )
{
	int reset_flag = __lsb_check_params;
	wchar_t * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstok");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wcstok()");
	validate_RWaddress( arg0, "wcstok - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcstok - arg0");
	validate_Rdaddress( arg1, "wcstok - arg1");
		validate_NULL_TYPETYPE(  arg1, "wcstok - arg1");
	validate_RWaddress( arg2, "wcstok - arg2");
		validate_NULL_TYPETYPE(  arg2, "wcstok - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

