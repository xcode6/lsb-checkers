// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef socket
static int(*funcptr) (int , int , int ) = 0;

int socket (int arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "socket");
	validate_NULL_TYPETYPE(  arg0, "socket");
	validate_NULL_TYPETYPE(  arg1, "socket");
	validate_NULL_TYPETYPE(  arg2, "socket");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_socket (int arg0 , int arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "socket");
	return funcptr(arg0, arg1, arg2);
}

