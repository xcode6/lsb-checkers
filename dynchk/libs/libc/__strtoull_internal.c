// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef __strtoull_internal
static unsigned long long(*funcptr) (const char * , char * * , int , int ) = 0;

extern int __lsb_check_params;
unsigned long long __strtoull_internal (const char * arg0 , char * * arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	unsigned long long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoull_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "__strtoull_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__strtoull_internal - arg0");
	validate_Rdaddress( arg1, "__strtoull_internal - arg1");
	validate_Rdaddress(* arg1, "__strtoull_internal - arg1");
		validate_RWaddress(  arg1, "__strtoull_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__strtoull_internal - arg2");
		validate_NULL_TYPETYPE(  arg3, "__strtoull_internal - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

