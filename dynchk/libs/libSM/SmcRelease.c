// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmcConn) = 0;

char * SmcRelease(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcRelease");
	validate_NULL_TYPETYPE(arg0, "SmcRelease");
	return funcptr(arg0);
}

char * __lsb_SmcRelease(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcRelease");
	return funcptr(arg0);
}

