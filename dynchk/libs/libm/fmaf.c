// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef fmaf
static float(*funcptr) (float , float , float ) = 0;

extern int __lsb_check_params;
float fmaf (float arg0 , float arg1 , float arg2 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "fmaf", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "fmaf()");
		validate_NULL_TYPETYPE(  arg0, "fmaf - arg0");
		validate_NULL_TYPETYPE(  arg1, "fmaf - arg1");
		validate_NULL_TYPETYPE(  arg2, "fmaf - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

