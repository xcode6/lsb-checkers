// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/timex.h>
#undef adjtimex
static int(*funcptr) (struct timex * ) = 0;

extern int __lsb_check_params;
int adjtimex (struct timex * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "adjtimex");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "adjtimex - arg0");
		validate_NULL_TYPETYPE(  arg0, "adjtimex - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

