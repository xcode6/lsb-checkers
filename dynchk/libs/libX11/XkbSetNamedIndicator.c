// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Atom, int, int, int, XkbIndicatorMapPtr) = 0;

int XkbSetNamedIndicator(Display * arg0, Atom arg1, int arg2, int arg3, int arg4, XkbIndicatorMapPtr arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg0, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg1, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg2, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg3, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg4, "XkbSetNamedIndicator");
	validate_NULL_TYPETYPE(arg5, "XkbSetNamedIndicator");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int __lsb_XkbSetNamedIndicator(Display * arg0, Atom arg1, int arg2, int arg3, int arg4, XkbIndicatorMapPtr arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetNamedIndicator");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

