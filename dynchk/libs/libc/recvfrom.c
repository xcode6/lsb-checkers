// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/socket.h>
#undef recvfrom
static ssize_t(*funcptr) (int , void * , size_t , int , struct sockaddr * , socklen_t * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
ssize_t recvfrom (int arg0 , void * arg1 , size_t arg2 , int arg3 , struct sockaddr * arg4 , socklen_t * arg5 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recvfrom");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "recvfrom()");
		validate_NULL_TYPETYPE(  arg0, "recvfrom - arg0");
	validate_RWaddress( arg1, "recvfrom - arg1");
		validate_NULL_TYPETYPE(  arg1, "recvfrom - arg1");
		validate_NULL_TYPETYPE(  arg2, "recvfrom - arg2");
		validate_NULL_TYPETYPE(  arg3, "recvfrom - arg3");
	validate_RWaddress( arg4, "recvfrom - arg4");
		validate_NULL_TYPETYPE(  arg4, "recvfrom - arg4");
	validate_RWaddress( arg5, "recvfrom - arg5");
		validate_NULL_TYPETYPE(  arg5, "recvfrom - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

