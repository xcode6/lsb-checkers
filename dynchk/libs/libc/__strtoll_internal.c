// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef __strtoll_internal
static long long(*funcptr) (const char * , char * * , int , int ) = 0;

extern int __lsb_check_params;
long long __strtoll_internal (const char * arg0 , char * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	long long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoll_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "__strtoll_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__strtoll_internal - arg0");
	validate_Rdaddress( arg1, "__strtoll_internal - arg1");
	validate_Rdaddress(* arg1, "__strtoll_internal - arg1");
		validate_RWaddress(  arg1, "__strtoll_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__strtoll_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__strtoll_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

