// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, int, int) = 0;

void XtMoveWidget(Widget arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMoveWidget");
	validate_NULL_TYPETYPE(arg0, "XtMoveWidget");
	validate_NULL_TYPETYPE(arg1, "XtMoveWidget");
	validate_NULL_TYPETYPE(arg2, "XtMoveWidget");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_XtMoveWidget(Widget arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMoveWidget");
	return funcptr(arg0, arg1, arg2);
}

