// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, char * *, int) = 0;

int XSetCommand(Display * arg0, Window arg1, char * * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetCommand");
	validate_NULL_TYPETYPE(arg0, "XSetCommand");
	validate_NULL_TYPETYPE(arg1, "XSetCommand");
	validate_NULL_TYPETYPE(arg2, "XSetCommand");
	validate_NULL_TYPETYPE(arg3, "XSetCommand");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XSetCommand(Display * arg0, Window arg1, char * * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetCommand");
	return funcptr(arg0, arg1, arg2, arg3);
}

