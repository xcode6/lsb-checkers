// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, char *) = 0;

int XSetIconName(Display * arg0, Window arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetIconName");
	validate_NULL_TYPETYPE(arg0, "XSetIconName");
	validate_NULL_TYPETYPE(arg1, "XSetIconName");
	validate_NULL_TYPETYPE(arg2, "XSetIconName");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XSetIconName(Display * arg0, Window arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetIconName");
	return funcptr(arg0, arg1, arg2);
}

