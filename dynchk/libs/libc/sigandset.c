// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <signal.h>
#undef sigandset
static int(*funcptr) (sigset_t * , const sigset_t * , const sigset_t * ) = 0;

extern int __lsb_check_params;
int sigandset (sigset_t * arg0 , const sigset_t * arg1 , const sigset_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sigandset", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigandset()");
		validate_RWaddress( arg0, "sigandset - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigandset - arg0");
		validate_Rdaddress( arg1, "sigandset - arg1");
		validate_NULL_TYPETYPE(  arg1, "sigandset - arg1");
		validate_Rdaddress( arg2, "sigandset - arg2");
		validate_NULL_TYPETYPE(  arg2, "sigandset - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

