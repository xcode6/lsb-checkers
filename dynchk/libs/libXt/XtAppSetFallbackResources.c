// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtAppContext, String *) = 0;

void XtAppSetFallbackResources(XtAppContext arg0, String * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetFallbackResources");
	validate_NULL_TYPETYPE(arg0, "XtAppSetFallbackResources");
	validate_NULL_TYPETYPE(arg1, "XtAppSetFallbackResources");
	return funcptr(arg0, arg1);
}

void __lsb_XtAppSetFallbackResources(XtAppContext arg0, String * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetFallbackResources");
	return funcptr(arg0, arg1);
}

