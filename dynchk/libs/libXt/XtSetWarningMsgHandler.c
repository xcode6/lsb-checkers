// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtErrorMsgHandler) = 0;

void XtSetWarningMsgHandler(XtErrorMsgHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtSetWarningMsgHandler");
	validate_NULL_TYPETYPE(arg0, "XtSetWarningMsgHandler");
	return funcptr(arg0);
}

void __lsb_XtSetWarningMsgHandler(XtErrorMsgHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtSetWarningMsgHandler");
	return funcptr(arg0);
}

