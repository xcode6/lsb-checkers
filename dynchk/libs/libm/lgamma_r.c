// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef lgamma_r
static double(*funcptr) (double , int * ) = 0;

extern int __lsb_check_params;
double lgamma_r (double arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "lgamma_r", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lgamma_r()");
		validate_NULL_TYPETYPE(  arg0, "lgamma_r - arg0");
		validate_RWaddress( arg1, "lgamma_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "lgamma_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

