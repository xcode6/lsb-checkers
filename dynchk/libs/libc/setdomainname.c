// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <unistd.h>
#undef setdomainname
static int(*funcptr) (const char * , size_t ) = 0;

extern int __lsb_check_params;
int setdomainname (const char * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setdomainname");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "setdomainname - arg0");
		validate_NULL_TYPETYPE(  arg0, "setdomainname - arg0");
		validate_NULL_TYPETYPE(  arg1, "setdomainname - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

