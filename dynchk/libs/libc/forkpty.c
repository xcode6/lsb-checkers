// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#include <pty.h>
#undef forkpty
static int(*funcptr) (int * , char * , struct termios * , struct winsize * ) = 0;

int forkpty (int * arg0 , char * arg1 , struct termios * arg2 , struct winsize * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "forkpty");
	validate_Rdaddress( arg0, "forkpty");
	validate_NULL_TYPETYPE(  arg0, "forkpty");
	validate_Rdaddress( arg1, "forkpty");
	validate_NULL_TYPETYPE(  arg1, "forkpty");
	validate_Rdaddress( arg2, "forkpty");
	validate_NULL_TYPETYPE(  arg2, "forkpty");
	validate_Rdaddress( arg3, "forkpty");
	validate_NULL_TYPETYPE(  arg3, "forkpty");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_forkpty (int * arg0 , char * arg1 , struct termios * arg2 , struct winsize * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "forkpty");
	return funcptr(arg0, arg1, arg2, arg3);
}

