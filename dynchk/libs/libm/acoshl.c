// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef acoshl
static long double(*funcptr) (long double ) = 0;

long double acoshl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acoshl");
	validate_NULL_TYPETYPE(  arg0, "acoshl");
	return funcptr(arg0);
}

long double __lsb_acoshl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acoshl");
	return funcptr(arg0);
}

