// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/types.h>
#include <time.h>
#undef gmtime
static struct tm *(*funcptr) (const time_t * ) = 0;

extern int __lsb_check_params;
struct tm * gmtime (const time_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	struct tm * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "gmtime", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gmtime()");
		validate_Rdaddress( arg0, "gmtime - arg0");
		validate_NULL_TYPETYPE(  arg0, "gmtime - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

