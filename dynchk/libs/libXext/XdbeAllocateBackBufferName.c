// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/extensions/Xdbe.h>
static int(*funcptr)(Display *, Window, XdbeSwapAction) = 0;

XdbeBackBuffer XdbeAllocateBackBufferName(Display * arg0, Window arg1, XdbeSwapAction arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeAllocateBackBufferName");
	validate_NULL_TYPETYPE(arg0, "XdbeAllocateBackBufferName");
	validate_NULL_TYPETYPE(arg1, "XdbeAllocateBackBufferName");
	validate_NULL_TYPETYPE(arg2, "XdbeAllocateBackBufferName");
	return funcptr(arg0, arg1, arg2);
}

XdbeBackBuffer __lsb_XdbeAllocateBackBufferName(Display * arg0, Window arg1, XdbeSwapAction arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeAllocateBackBufferName");
	return funcptr(arg0, arg1, arg2);
}

