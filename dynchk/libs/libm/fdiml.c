// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fdiml
static long double(*funcptr) (long double , long double ) = 0;

extern int __lsb_check_params;
long double fdiml (long double arg0 , long double arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fdiml");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "fdiml - arg0");
		validate_NULL_TYPETYPE(  arg1, "fdiml - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

