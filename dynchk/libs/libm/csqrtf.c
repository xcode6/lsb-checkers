// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef csqrtf
static float complex(*funcptr) (float complex ) = 0;

extern int __lsb_check_params;
float complex csqrtf (float complex arg0 )
{
	int reset_flag = __lsb_check_params;
	float complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrtf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "csqrtf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

