// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <fnmatch.h>
#undef fnmatch
static int(*funcptr) (const char * , const char * , int ) = 0;

extern int __lsb_check_params;
int fnmatch (const char * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "fnmatch", "GLIBC_2.2.3");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fnmatch()");
		validate_Rdaddress( arg0, "fnmatch - arg0");
		validate_NULL_TYPETYPE(  arg0, "fnmatch - arg0");
		validate_Rdaddress( arg1, "fnmatch - arg1");
		validate_NULL_TYPETYPE(  arg1, "fnmatch - arg1");
		validate_NULL_TYPETYPE(  arg2, "fnmatch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

