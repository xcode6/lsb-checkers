// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef nexttowardl
static long double(*funcptr) (long double , long double ) = 0;

long double nexttowardl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nexttowardl");
	validate_NULL_TYPETYPE(arg0, "nexttowardl");
	validate_NULL_TYPETYPE(arg1, "nexttowardl");
	return funcptr(arg0, arg1);
}

long double lsb_nexttowardl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nexttowardl");
	return funcptr(arg0, arg1);
}

