// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef sincosf
static void(*funcptr) (float , float * , float * ) = 0;

extern int __lsb_check_params;
void sincosf (float arg0 , float * arg1 , float * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sincosf", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sincosf()");
		validate_NULL_TYPETYPE(  arg0, "sincosf - arg0");
		validate_RWaddress( arg1, "sincosf - arg1");
		validate_NULL_TYPETYPE(  arg1, "sincosf - arg1");
		validate_RWaddress( arg2, "sincosf - arg2");
		validate_NULL_TYPETYPE(  arg2, "sincosf - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

