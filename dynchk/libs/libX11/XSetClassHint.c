// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, XClassHint *) = 0;

int XSetClassHint(Display * arg0, Window arg1, XClassHint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetClassHint");
	validate_NULL_TYPETYPE(arg0, "XSetClassHint");
	validate_NULL_TYPETYPE(arg1, "XSetClassHint");
	validate_NULL_TYPETYPE(arg2, "XSetClassHint");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XSetClassHint(Display * arg0, Window arg1, XClassHint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetClassHint");
	return funcptr(arg0, arg1, arg2);
}

