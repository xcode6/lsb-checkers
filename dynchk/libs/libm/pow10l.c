// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef pow10l
static long double(*funcptr) (long double ) = 0;

long double pow10l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10l");
	validate_NULL_TYPETYPE(  arg0, "pow10l");
	return funcptr(arg0);
}

long double __lsb_pow10l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10l");
	return funcptr(arg0);
}

