// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int *, int *) = 0;

int XkbUseExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbUseExtension");
	validate_NULL_TYPETYPE(arg0, "XkbUseExtension");
	validate_NULL_TYPETYPE(arg1, "XkbUseExtension");
	validate_NULL_TYPETYPE(arg2, "XkbUseExtension");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XkbUseExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbUseExtension");
	return funcptr(arg0, arg1, arg2);
}

