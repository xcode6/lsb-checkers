// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbDescPtr, int, int, int, int) = 0;

int XkbResizeKeyType(XkbDescPtr arg0, int arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbResizeKeyType");
	validate_NULL_TYPETYPE(arg0, "XkbResizeKeyType");
	validate_NULL_TYPETYPE(arg1, "XkbResizeKeyType");
	validate_NULL_TYPETYPE(arg2, "XkbResizeKeyType");
	validate_NULL_TYPETYPE(arg3, "XkbResizeKeyType");
	validate_NULL_TYPETYPE(arg4, "XkbResizeKeyType");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_XkbResizeKeyType(XkbDescPtr arg0, int arg1, int arg2, int arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbResizeKeyType");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

