// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#include <X11/Xcms.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC, XcmsFloat, XcmsFloat, XcmsColor *) = 0;

int XcmsTekHVCQueryMaxC(XcmsCCC arg0, XcmsFloat arg1, XcmsFloat arg2, XcmsColor * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCQueryMaxC");
	validate_NULL_TYPETYPE(arg0, "XcmsTekHVCQueryMaxC");
	validate_NULL_TYPETYPE(arg1, "XcmsTekHVCQueryMaxC");
	validate_NULL_TYPETYPE(arg2, "XcmsTekHVCQueryMaxC");
	validate_NULL_TYPETYPE(arg3, "XcmsTekHVCQueryMaxC");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XcmsTekHVCQueryMaxC(XcmsCCC arg0, XcmsFloat arg1, XcmsFloat arg2, XcmsColor * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCQueryMaxC");
	return funcptr(arg0, arg1, arg2, arg3);
}

