// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *) = 0;

int XcmsCIELuvClipuv(XcmsCCC arg0, XcmsColor * arg1, unsigned int arg2, unsigned int arg3, int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvClipuv");
	validate_NULL_TYPETYPE(arg0, "XcmsCIELuvClipuv");
	validate_NULL_TYPETYPE(arg1, "XcmsCIELuvClipuv");
	validate_NULL_TYPETYPE(arg2, "XcmsCIELuvClipuv");
	validate_NULL_TYPETYPE(arg3, "XcmsCIELuvClipuv");
	validate_NULL_TYPETYPE(arg4, "XcmsCIELuvClipuv");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_XcmsCIELuvClipuv(XcmsCCC arg0, XcmsColor * arg1, unsigned int arg2, unsigned int arg3, int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvClipuv");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

