// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef expf
static float(*funcptr) (float ) = 0;

float expf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expf");
	validate_NULL_TYPETYPE(arg0, "expf");
	return funcptr(arg0);
}

float lsb_expf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expf");
	return funcptr(arg0);
}

