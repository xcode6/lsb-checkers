// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef dremf
static float(*funcptr) (float , float ) = 0;

float dremf (float arg0 , float arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dremf");
	validate_NULL_TYPETYPE(  arg0, "dremf");
	validate_NULL_TYPETYPE(  arg1, "dremf");
	return funcptr(arg0, arg1);
}

float __lsb_dremf (float arg0 , float arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "dremf");
	return funcptr(arg0, arg1);
}

