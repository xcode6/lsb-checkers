// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef cfsetispeed
static int(*funcptr) (struct termios * , speed_t ) = 0;

int cfsetispeed (struct termios * arg0 , speed_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfsetispeed");
	validate_Rdaddress( arg0, "cfsetispeed");
	validate_NULL_TYPETYPE(  arg0, "cfsetispeed");
	validate_NULL_TYPETYPE(  arg1, "cfsetispeed");
	return funcptr(arg0, arg1);
}

int __lsb_cfsetispeed (struct termios * arg0 , speed_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfsetispeed");
	return funcptr(arg0, arg1);
}

