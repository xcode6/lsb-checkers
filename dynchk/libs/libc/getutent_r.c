// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <utmp.h>
#undef getutent_r
static int(*funcptr) (struct utmp * , struct utmp * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int getutent_r (struct utmp * arg0 , struct utmp * * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getutent_r()");
	validate_RWaddress( arg0, "getutent_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "getutent_r - arg0");
	validate_RWaddress( arg1, "getutent_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "getutent_r - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

