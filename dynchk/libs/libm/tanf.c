// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef tanf
static float(*funcptr) (float ) = 0;

float tanf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanf");
	validate_NULL_TYPETYPE(arg0, "tanf");
	return funcptr(arg0);
}

float lsb_tanf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanf");
	return funcptr(arg0);
}

