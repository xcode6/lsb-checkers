// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef asinl
static long double(*funcptr) (long double ) = 0;

long double asinl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinl");
	validate_NULL_TYPETYPE(  arg0, "asinl");
	return funcptr(arg0);
}

long double __lsb_asinl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinl");
	return funcptr(arg0);
}

