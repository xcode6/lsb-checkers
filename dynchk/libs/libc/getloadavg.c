// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#include <stdlib.h>
#undef getloadavg
static int(*funcptr) (double [], int ) = 0;

extern int __lsb_check_params;
int getloadavg (double arg0 [], int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "getloadavg", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "getloadavg()");
		validate_NULL_TYPETYPE(  arg0, "getloadavg - arg0");
		validate_NULL_TYPETYPE(  arg1, "getloadavg - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

