// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, XFontSet, GC, int, int, char *, int) = 0;

void XmbDrawImageString(Display * arg0, Drawable arg1, XFontSet arg2, GC arg3, int arg4, int arg5, char * arg6, int arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg0, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg1, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg2, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg3, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg4, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg5, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg6, "XmbDrawImageString");
	validate_NULL_TYPETYPE(arg7, "XmbDrawImageString");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void __lsb_XmbDrawImageString(Display * arg0, Drawable arg1, XFontSet arg2, GC arg3, int arg4, int arg5, char * arg6, int arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XmbDrawImageString");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

