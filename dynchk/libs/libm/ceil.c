// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef ceil
static double(*funcptr) (double ) = 0;

extern int __lsb_check_params;
double ceil (double arg0 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ceil");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "ceil - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

