// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef llrintf
static long long(*funcptr) (float ) = 0;

extern int __lsb_check_params;
long long llrintf (float arg0 )
{
	int reset_flag = __lsb_check_params;
	long long ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "llrintf", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "llrintf()");
		validate_NULL_TYPETYPE(  arg0, "llrintf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

