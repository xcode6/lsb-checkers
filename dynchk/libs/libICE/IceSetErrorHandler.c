// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceErrorHandler) = 0;

IceErrorHandler IceSetErrorHandler(IceErrorHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceSetErrorHandler");
	validate_NULL_TYPETYPE(arg0, "IceSetErrorHandler");
	return funcptr(arg0);
}

IceErrorHandler __lsb_IceSetErrorHandler(IceErrorHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceSetErrorHandler");
	return funcptr(arg0);
}

