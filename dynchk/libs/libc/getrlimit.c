// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef getrlimit
static int(*funcptr) (__rlimit_resource_t , struct rlimit * ) = 0;

extern int __lsb_check_params;
int getrlimit (__rlimit_resource_t arg0 , struct rlimit * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getrlimit");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "getrlimit - arg0");
	validate_Rdaddress( arg1, "getrlimit - arg1");
		validate_NULL_TYPETYPE(  arg1, "getrlimit - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

