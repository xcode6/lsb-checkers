// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcslen
static size_t(*funcptr) (const wchar_t * ) = 0;

extern int __lsb_check_params;
size_t wcslen (const wchar_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "wcslen", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wcslen()");
		validate_Rdaddress( arg0, "wcslen - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcslen - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

