// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, GC, unsigned long, GC) = 0;

int XCopyGC(Display * arg0, GC arg1, unsigned long arg2, GC arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCopyGC");
	validate_NULL_TYPETYPE(arg0, "XCopyGC");
	validate_NULL_TYPETYPE(arg1, "XCopyGC");
	validate_NULL_TYPETYPE(arg2, "XCopyGC");
	validate_NULL_TYPETYPE(arg3, "XCopyGC");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XCopyGC(Display * arg0, GC arg1, unsigned long arg2, GC arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCopyGC");
	return funcptr(arg0, arg1, arg2, arg3);
}

