// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <time.h>
#undef gmtime_r
static struct tm *(*funcptr) (const time_t * , struct tm * ) = 0;

extern int __lsb_check_params;
struct tm * gmtime_r (const time_t * arg0 , struct tm * arg1 )
{
	int reset_flag = __lsb_check_params;
	struct tm * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "gmtime_r", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gmtime_r()");
		validate_Rdaddress( arg0, "gmtime_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "gmtime_r - arg0");
		validate_RWaddress( arg1, "gmtime_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "gmtime_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

