// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int, int, int, int, int) = 0;

int XChangePointerControl(Display * arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg0, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg1, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg2, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg3, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg4, "XChangePointerControl");
	validate_NULL_TYPETYPE(arg5, "XChangePointerControl");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int __lsb_XChangePointerControl(Display * arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangePointerControl");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

