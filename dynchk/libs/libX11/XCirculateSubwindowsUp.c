// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window) = 0;

int XCirculateSubwindowsUp(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCirculateSubwindowsUp");
	validate_NULL_TYPETYPE(arg0, "XCirculateSubwindowsUp");
	validate_NULL_TYPETYPE(arg1, "XCirculateSubwindowsUp");
	return funcptr(arg0, arg1);
}

int __lsb_XCirculateSubwindowsUp(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCirculateSubwindowsUp");
	return funcptr(arg0, arg1);
}

