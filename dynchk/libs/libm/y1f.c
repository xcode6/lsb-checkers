// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef y1f
static float(*funcptr) (float ) = 0;

float y1f (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "y1f");
	validate_NULL_TYPETYPE(  arg0, "y1f");
	return funcptr(arg0);
}

float __lsb_y1f (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "y1f");
	return funcptr(arg0);
}

