// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sched.h>
#include <sys/types.h>
#undef sched_setparam
static int(*funcptr) (pid_t , const struct sched_param * ) = 0;

extern int __lsb_check_params;
int sched_setparam (pid_t arg0 , const struct sched_param * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sched_setparam", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sched_setparam()");
		validate_NULL_TYPETYPE(  arg0, "sched_setparam - arg0");
		validate_Rdaddress( arg1, "sched_setparam - arg1");
		validate_NULL_TYPETYPE(  arg1, "sched_setparam - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

