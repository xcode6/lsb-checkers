// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef y0l
static long double(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
long double y0l (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "y0l");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "y0l()");
		validate_NULL_TYPETYPE(  arg0, "y0l - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

