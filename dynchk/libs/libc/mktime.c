// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <time.h>
#undef mktime
static time_t(*funcptr) (struct tm * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
time_t mktime (struct tm * arg0 )
{
	int reset_flag = __lsb_check_params;
	time_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mktime");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mktime()");
	validate_RWaddress( arg0, "mktime - arg0");
		validate_NULL_TYPETYPE(  arg0, "mktime - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

