// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, GC, unsigned long, unsigned long, int, unsigned long) = 0;

int XSetState(Display * arg0, GC arg1, unsigned long arg2, unsigned long arg3, int arg4, unsigned long arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetState");
	validate_NULL_TYPETYPE(arg0, "XSetState");
	validate_NULL_TYPETYPE(arg1, "XSetState");
	validate_NULL_TYPETYPE(arg2, "XSetState");
	validate_NULL_TYPETYPE(arg3, "XSetState");
	validate_NULL_TYPETYPE(arg4, "XSetState");
	validate_NULL_TYPETYPE(arg5, "XSetState");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int __lsb_XSetState(Display * arg0, GC arg1, unsigned long arg2, unsigned long arg3, int arg4, unsigned long arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetState");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

