// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/socket.h>
#undef recv
static ssize_t(*funcptr) (int , void * , size_t , int ) = 0;

extern int __lsb_check_params;
ssize_t recv (int arg0 , void * arg1 , size_t arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recv");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "recv - arg0");
	validate_Rdaddress( arg1, "recv - arg1");
		validate_NULL_TYPETYPE(  arg1, "recv - arg1");
		validate_NULL_TYPETYPE(  arg2, "recv - arg2");
		validate_NULL_TYPETYPE(  arg3, "recv - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

