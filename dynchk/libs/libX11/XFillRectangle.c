// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, GC, int, int, unsigned int, unsigned int) = 0;

int XFillRectangle(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFillRectangle");
	validate_NULL_TYPETYPE(arg0, "XFillRectangle");
	validate_NULL_TYPETYPE(arg1, "XFillRectangle");
	validate_NULL_TYPETYPE(arg2, "XFillRectangle");
	validate_NULL_TYPETYPE(arg3, "XFillRectangle");
	validate_NULL_TYPETYPE(arg4, "XFillRectangle");
	validate_NULL_TYPETYPE(arg5, "XFillRectangle");
	validate_NULL_TYPETYPE(arg6, "XFillRectangle");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

int __lsb_XFillRectangle(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFillRectangle");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

