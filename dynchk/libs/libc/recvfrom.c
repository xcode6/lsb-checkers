// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/socket.h>
#undef recvfrom
static ssize_t(*funcptr) (int , void * , size_t , int , struct sockaddr * , socklen_t * ) = 0;

ssize_t recvfrom (int arg0 , void * arg1 , size_t arg2 , int arg3 , struct sockaddr * arg4 , socklen_t * arg5 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recvfrom");
	validate_NULL_TYPETYPE(  arg0, "recvfrom");
	validate_Rdaddress( arg1, "recvfrom");
	validate_NULL_TYPETYPE(  arg1, "recvfrom");
	validate_NULL_TYPETYPE(  arg2, "recvfrom");
	validate_NULL_TYPETYPE(  arg3, "recvfrom");
	validate_Rdaddress( arg4, "recvfrom");
	validate_NULL_TYPETYPE(  arg4, "recvfrom");
	validate_Rdaddress( arg5, "recvfrom");
	validate_NULL_TYPETYPE(  arg5, "recvfrom");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

ssize_t __lsb_recvfrom (int arg0 , void * arg1 , size_t arg2 , int arg3 , struct sockaddr * arg4 , socklen_t * arg5 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recvfrom");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

