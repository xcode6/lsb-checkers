// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vswscanf
static int(*funcptr) (const wchar_t * , const wchar_t * , va_list ) = 0;

extern int __lsb_check_params;
int vswscanf (const wchar_t * arg0 , const wchar_t * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vswscanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "vswscanf()");
		validate_Rdaddress( arg0, "vswscanf - arg0");
		validate_NULL_TYPETYPE(  arg0, "vswscanf - arg0");
		validate_Rdaddress( arg1, "vswscanf - arg1");
		validate_NULL_TYPETYPE(  arg1, "vswscanf - arg1");
		validate_NULL_TYPETYPE(  arg2, "vswscanf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

