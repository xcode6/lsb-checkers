// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtAppContext, XtErrorMsgHandler) = 0;

XtErrorMsgHandler XtAppSetErrorMsgHandler(XtAppContext arg0, XtErrorMsgHandler arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetErrorMsgHandler");
	validate_NULL_TYPETYPE(arg0, "XtAppSetErrorMsgHandler");
	validate_NULL_TYPETYPE(arg1, "XtAppSetErrorMsgHandler");
	return funcptr(arg0, arg1);
}

XtErrorMsgHandler __lsb_XtAppSetErrorMsgHandler(XtAppContext arg0, XtErrorMsgHandler arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetErrorMsgHandler");
	return funcptr(arg0, arg1);
}

