// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/time.h>
#undef getitimer
static int(*funcptr) (__itimer_which_t , struct itimerval * ) = 0;

extern int __lsb_check_params;
int getitimer (__itimer_which_t arg0 , struct itimerval * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getitimer");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "getitimer()");
		validate_NULL_TYPETYPE(  arg0, "getitimer - arg0");
		validate_RWaddress( arg1, "getitimer - arg1");
		validate_NULL_TYPETYPE(  arg1, "getitimer - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

