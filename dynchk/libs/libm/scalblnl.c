// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef scalblnl
static long double(*funcptr) (long double , long ) = 0;

extern int __lsb_check_params;
long double scalblnl (long double arg0 , long arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "scalblnl", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "scalblnl()");
		validate_NULL_TYPETYPE(  arg0, "scalblnl - arg0");
		validate_NULL_TYPETYPE(  arg1, "scalblnl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

