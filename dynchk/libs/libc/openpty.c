// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef openpty
static int(*funcptr) (int * , int * , char * , struct termios * , struct winsize * ) = 0;

int openpty (int * arg0 , int * arg1 , char * arg2 , struct termios * arg3 , struct winsize * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "openpty");
	validate_NULL_TYPETYPE(arg0, "openpty");
	validate_NULL_TYPETYPE(arg1, "openpty");
	validate_NULL_TYPETYPE(arg2, "openpty");
	validate_NULL_TYPETYPE(arg3, "openpty");
	validate_NULL_TYPETYPE(arg4, "openpty");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_openpty (int * arg0 , int * arg1 , char * arg2 , struct termios * arg3 , struct winsize * arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "openpty");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

