// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <time.h>
#undef asctime
static char *(*funcptr) (const struct tm * ) = 0;

extern int __lsb_check_params;
char * asctime (const struct tm * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "asctime", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "asctime()");
		validate_Rdaddress( arg0, "asctime - arg0");
		validate_NULL_TYPETYPE(  arg0, "asctime - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

