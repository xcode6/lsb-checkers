// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, Drawable, GC, int, int, unsigned int, unsigned int, int, int, unsigned long) = 0;

int XCopyPlane(Display * arg0, Drawable arg1, Drawable arg2, GC arg3, int arg4, int arg5, unsigned int arg6, unsigned int arg7, int arg8, int arg9, unsigned long arg10)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCopyPlane");
	validate_NULL_TYPETYPE(arg0, "XCopyPlane");
	validate_NULL_TYPETYPE(arg1, "XCopyPlane");
	validate_NULL_TYPETYPE(arg2, "XCopyPlane");
	validate_NULL_TYPETYPE(arg3, "XCopyPlane");
	validate_NULL_TYPETYPE(arg4, "XCopyPlane");
	validate_NULL_TYPETYPE(arg5, "XCopyPlane");
	validate_NULL_TYPETYPE(arg6, "XCopyPlane");
	validate_NULL_TYPETYPE(arg7, "XCopyPlane");
	validate_NULL_TYPETYPE(arg8, "XCopyPlane");
	validate_NULL_TYPETYPE(arg9, "XCopyPlane");
	validate_NULL_TYPETYPE(arg10, "XCopyPlane");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

int __lsb_XCopyPlane(Display * arg0, Drawable arg1, Drawable arg2, GC arg3, int arg4, int arg5, unsigned int arg6, unsigned int arg7, int arg8, int arg9, unsigned long arg10)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCopyPlane");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

