// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#include <sys/uio.h>
#undef writev
static ssize_t(*funcptr) (int , const struct iovec * , int ) = 0;

extern int __lsb_check_params;
ssize_t writev (int arg0 , const struct iovec * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "writev");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "writev - arg0");
	validate_Rdaddress( arg1, "writev - arg1");
		validate_NULL_TYPETYPE(  arg1, "writev - arg1");
		validate_NULL_TYPETYPE(  arg2, "writev - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

