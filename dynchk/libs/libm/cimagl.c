// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cimagl
static long double(*funcptr) (long double complex ) = 0;

long double cimagl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimagl");
	validate_NULL_TYPETYPE(  arg0, "cimagl");
	return funcptr(arg0);
}

long double __lsb_cimagl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimagl");
	return funcptr(arg0);
}

