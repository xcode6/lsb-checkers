// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#include <fcntl.h>
#undef lockf64
static int(*funcptr) (int , int , off64_t ) = 0;

extern int __lsb_check_params;
int lockf64 (int arg0 , int arg1 , off64_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lockf64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "lockf64()");
		validate_NULL_TYPETYPE(  arg0, "lockf64 - arg0");
		validate_NULL_TYPETYPE(  arg1, "lockf64 - arg1");
		validate_NULL_TYPETYPE(  arg2, "lockf64 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

