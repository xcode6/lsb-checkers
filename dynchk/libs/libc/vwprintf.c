// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdarg.h>
#include <wchar.h>
#undef vwprintf
static int(*funcptr) (const wchar_t * , va_list ) = 0;

extern int __lsb_check_params;
int vwprintf (const wchar_t * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "vwprintf", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vwprintf()");
		validate_Rdaddress( arg0, "vwprintf - arg0");
		validate_NULL_TYPETYPE(  arg0, "vwprintf - arg0");
		validate_NULL_TYPETYPE(  arg1, "vwprintf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

