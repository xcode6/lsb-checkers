// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <sys/time.h>
#include <time.h>
#undef clock_getres
static int(*funcptr) (clockid_t , struct timespec * ) = 0;

extern int __lsb_check_params;
int clock_getres (clockid_t arg0 , struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "clock_getres", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clock_getres()");
		validate_NULL_TYPETYPE(  arg0, "clock_getres - arg0");
		validate_RWaddress( arg1, "clock_getres - arg1");
		validate_NULL_TYPETYPE(  arg1, "clock_getres - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
