// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/wait.h>
#undef wait
static pid_t(*funcptr) (int * ) = 0;

extern int __lsb_check_params;
pid_t wait (int * arg0 )
{
	int reset_flag = __lsb_check_params;
	pid_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "wait", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wait()");
		validate_RWaddress( arg0, "wait - arg0");
		validate_NULL_TYPETYPE(  arg0, "wait - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

