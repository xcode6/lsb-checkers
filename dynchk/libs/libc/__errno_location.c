// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <errno.h>
#undef __errno_location
static int *(*funcptr) () = 0;

extern int __lsb_check_params;
int * __errno_location ()
{
	int reset_flag = __lsb_check_params;
	int * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "__errno_location", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "__errno_location()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

