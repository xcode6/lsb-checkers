// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, GC, XArc *, int) = 0;

int XFillArcs(Display * arg0, Drawable arg1, GC arg2, XArc * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFillArcs");
	validate_NULL_TYPETYPE(arg0, "XFillArcs");
	validate_NULL_TYPETYPE(arg1, "XFillArcs");
	validate_NULL_TYPETYPE(arg2, "XFillArcs");
	validate_NULL_TYPETYPE(arg3, "XFillArcs");
	validate_NULL_TYPETYPE(arg4, "XFillArcs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_XFillArcs(Display * arg0, Drawable arg1, GC arg2, XArc * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFillArcs");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

