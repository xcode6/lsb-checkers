// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, GC, int, int, unsigned int, unsigned int, int, int) = 0;

int XDrawArc(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6, int arg7, int arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawArc");
	validate_NULL_TYPETYPE(arg0, "XDrawArc");
	validate_NULL_TYPETYPE(arg1, "XDrawArc");
	validate_NULL_TYPETYPE(arg2, "XDrawArc");
	validate_NULL_TYPETYPE(arg3, "XDrawArc");
	validate_NULL_TYPETYPE(arg4, "XDrawArc");
	validate_NULL_TYPETYPE(arg5, "XDrawArc");
	validate_NULL_TYPETYPE(arg6, "XDrawArc");
	validate_NULL_TYPETYPE(arg7, "XDrawArc");
	validate_NULL_TYPETYPE(arg8, "XDrawArc");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

int __lsb_XDrawArc(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6, int arg7, int arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawArc");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

