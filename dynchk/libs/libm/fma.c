// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef fma
static double(*funcptr) (double , double , double ) = 0;

extern int __lsb_check_params;
double fma (double arg0 , double arg1 , double arg2 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fma", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fma()");
		validate_NULL_TYPETYPE(  arg0, "fma - arg0");
		validate_NULL_TYPETYPE(  arg1, "fma - arg1");
		validate_NULL_TYPETYPE(  arg2, "fma - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

