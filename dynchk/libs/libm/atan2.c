// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef atan2
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
double atan2 (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "atan2", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "atan2()");
		validate_NULL_TYPETYPE(  arg0, "atan2 - arg0");
		validate_NULL_TYPETYPE(  arg1, "atan2 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

