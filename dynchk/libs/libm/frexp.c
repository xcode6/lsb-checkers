// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef frexp
static double(*funcptr) (double , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
double frexp (double arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "frexp");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "frexp()");
		validate_NULL_TYPETYPE(  arg0, "frexp - arg0");
	validate_RWaddress( arg1, "frexp - arg1");
		validate_NULL_TYPETYPE(  arg1, "frexp - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

