// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef ctanf
static float complex(*funcptr) (float complex ) = 0;

float complex ctanf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanf");
	validate_NULL_TYPETYPE(  arg0, "ctanf");
	return funcptr(arg0);
}

float complex __lsb_ctanf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanf");
	return funcptr(arg0);
}

