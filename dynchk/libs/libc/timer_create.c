// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <signal.h>
#include <time.h>
#undef timer_create
static int(*funcptr) (clockid_t , struct sigevent * , timer_t * ) = 0;

extern int __lsb_check_params;
int timer_create (clockid_t arg0 , struct sigevent * arg1 , timer_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "timer_create", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "timer_create()");
		validate_NULL_TYPETYPE(  arg0, "timer_create - arg0");
		validate_RWaddress( arg1, "timer_create - arg1");
		validate_NULL_TYPETYPE(  arg1, "timer_create - arg1");
		validate_RWaddress( arg2, "timer_create - arg2");
		validate_NULL_TYPETYPE(  arg2, "timer_create - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
