// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef j1l
static long double(*funcptr) (long double ) = 0;

long double j1l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j1l");
	validate_NULL_TYPETYPE(  arg0, "j1l");
	return funcptr(arg0);
}

long double __lsb_j1l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j1l");
	return funcptr(arg0);
}

