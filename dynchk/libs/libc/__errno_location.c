// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <errno.h>
#undef __errno_location
static int *(*funcptr) () = 0;

extern int __lsb_check_params;
int * __errno_location ()
{
	int reset_flag = __lsb_check_params;
	int * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__errno_location");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

