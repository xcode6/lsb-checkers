// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, char *, char *, Pixmap, char * *, int, XSizeHints *) = 0;

int XSetStandardProperties(Display * arg0, Window arg1, char * arg2, char * arg3, Pixmap arg4, char * * arg5, int arg6, XSizeHints * arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg0, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg1, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg2, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg3, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg4, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg5, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg6, "XSetStandardProperties");
	validate_NULL_TYPETYPE(arg7, "XSetStandardProperties");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

int __lsb_XSetStandardProperties(Display * arg0, Window arg1, char * arg2, char * arg3, Pixmap arg4, char * * arg5, int arg6, XSizeHints * arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetStandardProperties");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

