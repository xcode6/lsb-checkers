// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, GC, int, int, XTextItem *, int) = 0;

int XDrawText(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, XTextItem * arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawText");
	validate_NULL_TYPETYPE(arg0, "XDrawText");
	validate_NULL_TYPETYPE(arg1, "XDrawText");
	validate_NULL_TYPETYPE(arg2, "XDrawText");
	validate_NULL_TYPETYPE(arg3, "XDrawText");
	validate_NULL_TYPETYPE(arg4, "XDrawText");
	validate_NULL_TYPETYPE(arg5, "XDrawText");
	validate_NULL_TYPETYPE(arg6, "XDrawText");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

int __lsb_XDrawText(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, XTextItem * arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawText");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

