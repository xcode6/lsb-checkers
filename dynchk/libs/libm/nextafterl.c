// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef nextafterl
static long double(*funcptr) (long double , long double ) = 0;

long double nextafterl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nextafterl");
	validate_NULL_TYPETYPE(  arg0, "nextafterl");
	validate_NULL_TYPETYPE(  arg1, "nextafterl");
	return funcptr(arg0, arg1);
}

long double __lsb_nextafterl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nextafterl");
	return funcptr(arg0, arg1);
}

