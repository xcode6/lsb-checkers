// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Colormap) = 0;

XcmsCCC XcmsCCCOfColormap(Display * arg0, Colormap arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCCCOfColormap");
	validate_NULL_TYPETYPE(arg0, "XcmsCCCOfColormap");
	validate_NULL_TYPETYPE(arg1, "XcmsCCCOfColormap");
	return funcptr(arg0, arg1);
}

XcmsCCC __lsb_XcmsCCCOfColormap(Display * arg0, Colormap arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCCCOfColormap");
	return funcptr(arg0, arg1);
}

