// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef getwd
static char *(*funcptr) (char * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * getwd (char * arg0 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getwd");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getwd()");
	validate_RWaddress( arg0, "getwd - arg0");
		validate_NULL_TYPETYPE(  arg0, "getwd - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

