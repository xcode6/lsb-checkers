// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef mrand48
static long(*funcptr) () = 0;

long mrand48 ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mrand48");
	return funcptr();
}

long lsb_mrand48 ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mrand48");
	return funcptr();
}

