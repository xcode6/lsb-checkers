// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Colormap, XColor *, int) = 0;

int XStoreColors(Display * arg0, Colormap arg1, XColor * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStoreColors");
	validate_NULL_TYPETYPE(arg0, "XStoreColors");
	validate_NULL_TYPETYPE(arg1, "XStoreColors");
	validate_NULL_TYPETYPE(arg2, "XStoreColors");
	validate_NULL_TYPETYPE(arg3, "XStoreColors");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XStoreColors(Display * arg0, Colormap arg1, XColor * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XStoreColors");
	return funcptr(arg0, arg1, arg2, arg3);
}

