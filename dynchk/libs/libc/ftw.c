// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <ftw.h>
#undef ftw
static int(*funcptr) (const char * , __ftw_func_t , int ) = 0;

extern int __lsb_check_params;
int ftw (const char * arg0 , __ftw_func_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "ftw", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "ftw()");
		validate_Rdaddress( arg0, "ftw - arg0");
		validate_NULL_TYPETYPE(  arg0, "ftw - arg0");
		validate_NULL_TYPETYPE(  arg1, "ftw - arg1");
		validate_NULL_TYPETYPE(  arg2, "ftw - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

