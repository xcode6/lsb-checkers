// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef nonl
static int(*funcptr) () = 0;

int nonl ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nonl");
	return funcptr();
}

int lsb_nonl ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nonl");
	return funcptr();
}

