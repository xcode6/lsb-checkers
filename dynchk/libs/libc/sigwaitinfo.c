// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigwaitinfo
static int(*funcptr) (const sigset_t * , siginfo_t * ) = 0;

extern int __lsb_check_params;
int sigwaitinfo (const sigset_t * arg0 , siginfo_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigwaitinfo");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "sigwaitinfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigwaitinfo - arg0");
	validate_Rdaddress( arg1, "sigwaitinfo - arg1");
		validate_NULL_TYPETYPE(  arg1, "sigwaitinfo - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

