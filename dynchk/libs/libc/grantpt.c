// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef grantpt
static int(*funcptr) (int ) = 0;

int grantpt (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "grantpt");
	validate_NULL_TYPETYPE(  arg0, "grantpt");
	return funcptr(arg0);
}

int __lsb_grantpt (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "grantpt");
	return funcptr(arg0);
}

