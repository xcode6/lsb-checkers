// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <termios.h>
#undef tcdrain
static int(*funcptr) (int ) = 0;

int tcdrain (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcdrain");
	validate_NULL_TYPETYPE(  arg0, "tcdrain");
	return funcptr(arg0);
}

int __lsb_tcdrain (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcdrain");
	return funcptr(arg0);
}

