// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtAppContext, XtErrorMsgHandler) = 0;

XtErrorMsgHandler XtAppSetWarningMsgHandler(XtAppContext arg0, XtErrorMsgHandler arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetWarningMsgHandler");
	validate_NULL_TYPETYPE(arg0, "XtAppSetWarningMsgHandler");
	validate_NULL_TYPETYPE(arg1, "XtAppSetWarningMsgHandler");
	return funcptr(arg0, arg1);
}

XtErrorMsgHandler __lsb_XtAppSetWarningMsgHandler(XtAppContext arg0, XtErrorMsgHandler arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetWarningMsgHandler");
	return funcptr(arg0, arg1);
}

