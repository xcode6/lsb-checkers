// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pwd.h>
#include <stddef.h>
#undef getpwnam_r
static int(*funcptr) (const char * , struct passwd * , char * , size_t , struct passwd * * ) = 0;

extern int __lsb_check_params;
int getpwnam_r (const char * arg0 , struct passwd * arg1 , char * arg2 , size_t arg3 , struct passwd * * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpwnam_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "getpwnam_r - arg0");
		validate_NULL_TYPETYPE(  arg0, "getpwnam_r - arg0");
	validate_Rdaddress( arg1, "getpwnam_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "getpwnam_r - arg1");
	validate_Rdaddress( arg2, "getpwnam_r - arg2");
		validate_NULL_TYPETYPE(  arg2, "getpwnam_r - arg2");
		validate_NULL_TYPETYPE(  arg3, "getpwnam_r - arg3");
	validate_Rdaddress( arg4, "getpwnam_r - arg4");
	validate_Rdaddress(* arg4, "getpwnam_r - arg4");
		validate_NULL_TYPETYPE(  arg4, "getpwnam_r - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

