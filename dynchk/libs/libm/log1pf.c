// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef log1pf
static float(*funcptr) (float ) = 0;

extern int __lsb_check_params;
float log1pf (float arg0 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "log1pf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "log1pf()");
		validate_NULL_TYPETYPE(  arg0, "log1pf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

