// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef sincosl
static void(*funcptr) (long double , long double * , long double * ) = 0;

extern int __lsb_check_params;
void sincosl (long double arg0 , long double * arg1 , long double * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sincosl", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sincosl()");
		validate_NULL_TYPETYPE(  arg0, "sincosl - arg0");
		validate_RWaddress( arg1, "sincosl - arg1");
		validate_NULL_TYPETYPE(  arg1, "sincosl - arg1");
		validate_RWaddress( arg2, "sincosl - arg2");
		validate_NULL_TYPETYPE(  arg2, "sincosl - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

