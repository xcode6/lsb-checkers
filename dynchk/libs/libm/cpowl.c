// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef cpowl
static long double complex(*funcptr) (long double complex , long double complex ) = 0;

extern int __lsb_check_params;
long double complex cpowl (long double complex arg0 , long double complex arg1 )
{
	int reset_flag = __lsb_check_params;
	long double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cpowl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "cpowl()");
		validate_NULL_TYPETYPE(  arg0, "cpowl - arg0");
		validate_NULL_TYPETYPE(  arg1, "cpowl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

