// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef llabs
static long long(*funcptr) (long long ) = 0;

long long llabs (long long arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llabs");
	validate_NULL_TYPETYPE(arg0, "llabs");
	return funcptr(arg0);
}

long long lsb_llabs (long long arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llabs");
	return funcptr(arg0);
}

