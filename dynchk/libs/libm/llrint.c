// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef llrint
static long long(*funcptr) (double ) = 0;

long long llrint (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llrint");
	validate_NULL_TYPETYPE(  arg0, "llrint");
	return funcptr(arg0);
}

long long __lsb_llrint (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llrint");
	return funcptr(arg0);
}

