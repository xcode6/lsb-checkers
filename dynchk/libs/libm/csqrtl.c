// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef csqrtl
static long double complex(*funcptr) (long double complex ) = 0;

long double complex csqrtl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrtl");
	validate_NULL_TYPETYPE(  arg0, "csqrtl");
	return funcptr(arg0);
}

long double complex __lsb_csqrtl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrtl");
	return funcptr(arg0);
}

