// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Widget, int, Modifiers, int, unsigned int, int, int, Window, Cursor) = 0;

void XtGrabButton(Widget arg0, int arg1, Modifiers arg2, int arg3, unsigned int arg4, int arg5, int arg6, Window arg7, Cursor arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGrabButton");
	validate_NULL_TYPETYPE(arg0, "XtGrabButton");
	validate_NULL_TYPETYPE(arg1, "XtGrabButton");
	validate_NULL_TYPETYPE(arg2, "XtGrabButton");
	validate_NULL_TYPETYPE(arg3, "XtGrabButton");
	validate_NULL_TYPETYPE(arg4, "XtGrabButton");
	validate_NULL_TYPETYPE(arg5, "XtGrabButton");
	validate_NULL_TYPETYPE(arg6, "XtGrabButton");
	validate_NULL_TYPETYPE(arg7, "XtGrabButton");
	validate_NULL_TYPETYPE(arg8, "XtGrabButton");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void __lsb_XtGrabButton(Widget arg0, int arg1, Modifiers arg2, int arg3, unsigned int arg4, int arg5, int arg6, Window arg7, Cursor arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGrabButton");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

