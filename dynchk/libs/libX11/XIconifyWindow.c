// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int) = 0;

int XIconifyWindow(Display * arg0, Window arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XIconifyWindow");
	validate_NULL_TYPETYPE(arg0, "XIconifyWindow");
	validate_NULL_TYPETYPE(arg1, "XIconifyWindow");
	validate_NULL_TYPETYPE(arg2, "XIconifyWindow");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XIconifyWindow(Display * arg0, Window arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XIconifyWindow");
	return funcptr(arg0, arg1, arg2);
}

