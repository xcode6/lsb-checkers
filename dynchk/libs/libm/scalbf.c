// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef scalbf
static float(*funcptr) (float , float ) = 0;

float scalbf (float arg0 , float arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalbf");
	validate_NULL_TYPETYPE(arg0, "scalbf");
	validate_NULL_TYPETYPE(arg1, "scalbf");
	return funcptr(arg0, arg1);
}

float lsb_scalbf (float arg0 , float arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalbf");
	return funcptr(arg0, arg1);
}

