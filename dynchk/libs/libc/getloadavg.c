// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
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
		funcptr = dlsym(RTLD_NEXT, "getloadavg");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "getloadavg - arg0");
		validate_NULL_TYPETYPE(  arg1, "getloadavg - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

