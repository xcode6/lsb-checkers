// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef coshf
static float(*funcptr) (float ) = 0;

float coshf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "coshf");
	validate_NULL_TYPETYPE(  arg0, "coshf");
	return funcptr(arg0);
}

float __lsb_coshf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "coshf");
	return funcptr(arg0);
}

