// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

char * IceAuthFileName(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAuthFileName");
	validate_NULL_TYPETYPE(arg0, "IceAuthFileName");
	return funcptr(arg0);
}

char * __lsb_IceAuthFileName(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAuthFileName");
	return funcptr(arg0);
}

