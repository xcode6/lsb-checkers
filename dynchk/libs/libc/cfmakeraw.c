// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef cfmakeraw
static void(*funcptr) (struct termios * ) = 0;

void cfmakeraw (struct termios * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfmakeraw");
	validate_Rdaddress( arg0, "cfmakeraw");
	validate_NULL_TYPETYPE(  arg0, "cfmakeraw");
	funcptr(arg0);
}

void __lsb_cfmakeraw (struct termios * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfmakeraw");
	funcptr(arg0);
}

