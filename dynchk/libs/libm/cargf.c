// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef cargf
static float(*funcptr) (float complex ) = 0;

extern int __lsb_check_params;
float cargf (float complex arg0 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "cargf", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cargf()");
		validate_NULL_TYPETYPE(  arg0, "cargf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

