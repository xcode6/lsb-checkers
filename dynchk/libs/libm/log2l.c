// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef log2l
static long double(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
long double log2l (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "log2l");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "log2l()");
		validate_NULL_TYPETYPE(  arg0, "log2l - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

