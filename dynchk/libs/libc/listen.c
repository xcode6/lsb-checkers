// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef listen
static int(*funcptr) (int , int ) = 0;

int listen (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "listen");
	validate_NULL_TYPETYPE(  arg0, "listen");
	validate_NULL_TYPETYPE(  arg1, "listen");
	return funcptr(arg0, arg1);
}

int __lsb_listen (int arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "listen");
	return funcptr(arg0, arg1);
}

