// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

unsigned long XAllPlanes(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllPlanes");
	validate_NULL_TYPETYPE(arg0, "XAllPlanes");
	return funcptr(arg0);
}

unsigned long __lsb_XAllPlanes(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllPlanes");
	return funcptr(arg0);
}

