// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/resource.h>
#undef setpriority
static int(*funcptr) (__priority_which_t , id_t , int ) = 0;

extern int __lsb_check_params;
int setpriority (__priority_which_t arg0 , id_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpriority");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "setpriority - arg0");
		validate_NULL_TYPETYPE(  arg1, "setpriority - arg1");
		validate_NULL_TYPETYPE(  arg2, "setpriority - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

