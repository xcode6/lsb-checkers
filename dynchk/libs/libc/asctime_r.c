// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <time.h>
#undef asctime_r
static char *(*funcptr) (const struct tm * , char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * asctime_r (const struct tm * arg0 , char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asctime_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "asctime_r()");
	validate_Rdaddress( arg0, "asctime_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "asctime_r - arg0");
	validate_RWaddress( arg1, "asctime_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "asctime_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

