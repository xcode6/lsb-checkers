// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef hypot
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
double hypot (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "hypot", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "hypot()");
		validate_NULL_TYPETYPE(  arg0, "hypot - arg0");
		validate_NULL_TYPETYPE(  arg1, "hypot - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

