// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <complex.h>
#undef cargl
static long double(*funcptr) (long double complex ) = 0;

extern int __lsb_check_params;
long double cargl (long double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "cargl", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cargl()");
		validate_NULL_TYPETYPE(  arg0, "cargl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

