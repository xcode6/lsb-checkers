// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigstack
static int(*funcptr) (struct sigstack * , struct sigstack * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int sigstack (struct sigstack * arg0 , struct sigstack * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigstack");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "sigstack()");
	validate_RWaddress( arg0, "sigstack - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigstack - arg0");
	validate_RWaddress( arg1, "sigstack - arg1");
		validate_NULL_TYPETYPE(  arg1, "sigstack - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

