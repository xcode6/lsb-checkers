// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, int, int) = 0;

void XtAddGrab(Widget arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddGrab");
	validate_NULL_TYPETYPE(arg0, "XtAddGrab");
	validate_NULL_TYPETYPE(arg1, "XtAddGrab");
	validate_NULL_TYPETYPE(arg2, "XtAddGrab");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_XtAddGrab(Widget arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddGrab");
	return funcptr(arg0, arg1, arg2);
}

