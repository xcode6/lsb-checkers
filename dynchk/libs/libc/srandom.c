// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef srandom
static void(*funcptr) (unsigned int ) = 0;

extern int __lsb_check_params;
void srandom (unsigned int arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "srandom", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "srandom()");
		validate_NULL_TYPETYPE(  arg0, "srandom - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

