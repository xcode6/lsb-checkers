// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
static int(*funcptr)(Region) = 0;

int XEmptyRegion(Region arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XEmptyRegion");
	validate_NULL_TYPETYPE(arg0, "XEmptyRegion");
	return funcptr(arg0);
}

int __lsb_XEmptyRegion(Region arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XEmptyRegion");
	return funcptr(arg0);
}

