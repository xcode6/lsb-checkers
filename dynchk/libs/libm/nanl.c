// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef nanl
static long double(*funcptr) (const char * ) = 0;

long double nanl (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nanl");
	validate_NULL_TYPETYPE(arg0, "nanl");
	return funcptr(arg0);
}

long double lsb_nanl (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nanl");
	return funcptr(arg0);
}

