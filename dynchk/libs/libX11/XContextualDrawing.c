// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
static int(*funcptr)(XFontSet) = 0;

int XContextualDrawing(XFontSet arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XContextualDrawing");
	validate_NULL_TYPETYPE(arg0, "XContextualDrawing");
	return funcptr(arg0);
}

int __lsb_XContextualDrawing(XFontSet arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XContextualDrawing");
	return funcptr(arg0);
}

