// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef getloadavg
static int(*funcptr) (double [], int ) = 0;

int getloadavg (double arg0 [], int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getloadavg");
	validate_NULL_TYPETYPE(arg0, "getloadavg");
	validate_NULL_TYPETYPE(arg1, "getloadavg");
	return funcptr(arg0, arg1);
}

int lsb_getloadavg (double arg0 [], int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getloadavg");
	return funcptr(arg0, arg1);
}

