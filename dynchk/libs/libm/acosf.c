// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef acosf
static float(*funcptr) (float ) = 0;

float acosf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acosf");
	validate_NULL_TYPETYPE(arg0, "acosf");
	return funcptr(arg0);
}

float lsb_acosf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acosf");
	return funcptr(arg0);
}

