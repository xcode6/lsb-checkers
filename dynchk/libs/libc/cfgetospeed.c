// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef cfgetospeed
static speed_t(*funcptr) (const struct termios * ) = 0;

speed_t cfgetospeed (const struct termios * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfgetospeed");
	validate_NULL_TYPETYPE(arg0, "cfgetospeed");
	return funcptr(arg0);
}

speed_t lsb_cfgetospeed (const struct termios * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cfgetospeed");
	return funcptr(arg0);
}

