// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <syslog.h>
#undef openlog
static void(*funcptr) (const char * , int , int ) = 0;

extern int __lsb_check_params;
void openlog (const char * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "openlog", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "openlog()");
		validate_Rdaddress( arg0, "openlog - arg0");
		validate_NULL_TYPETYPE(  arg0, "openlog - arg0");
		validate_NULL_TYPETYPE(  arg1, "openlog - arg1");
		validate_NULL_TYPETYPE(  arg2, "openlog - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

