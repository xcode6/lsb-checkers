// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef lgammal_r
static long double(*funcptr) (long double , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double lgammal_r (long double arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lgammal_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "lgammal_r()");
		validate_NULL_TYPETYPE(  arg0, "lgammal_r - arg0");
	validate_RWaddress( arg1, "lgammal_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "lgammal_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

