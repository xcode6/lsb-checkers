// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef clogf
static float complex(*funcptr) (float complex ) = 0;

float complex clogf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clogf");
	validate_NULL_TYPETYPE(  arg0, "clogf");
	return funcptr(arg0);
}

float complex __lsb_clogf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clogf");
	return funcptr(arg0);
}

