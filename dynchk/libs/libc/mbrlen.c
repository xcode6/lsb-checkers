// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wctype.h>
#include <wchar.h>
#undef mbrlen
static size_t(*funcptr) (const char * , size_t , mbstate_t * ) = 0;

extern int __lsb_check_params;
size_t mbrlen (const char * arg0 , size_t arg1 , mbstate_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbrlen");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "mbrlen - arg0");
		validate_NULL_TYPETYPE(  arg0, "mbrlen - arg0");
		validate_NULL_TYPETYPE(  arg1, "mbrlen - arg1");
	validate_Rdaddress( arg2, "mbrlen - arg2");
		validate_NULL_TYPETYPE(  arg2, "mbrlen - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

