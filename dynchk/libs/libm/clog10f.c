// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#include <complex.h>
#undef clog10f
static float complex(*funcptr) (float complex ) = 0;

float complex clog10f (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog10f");
	validate_NULL_TYPETYPE(arg0, "clog10f");
	return funcptr(arg0);
}

float complex lsb_clog10f (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog10f");
	return funcptr(arg0);
}

