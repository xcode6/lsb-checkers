// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, XtPointer, XtPointer) = 0;

void XtCallbackPopdown(Widget arg0, XtPointer arg1, XtPointer arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallbackPopdown");
	validate_NULL_TYPETYPE(arg0, "XtCallbackPopdown");
	validate_NULL_TYPETYPE(arg1, "XtCallbackPopdown");
	validate_NULL_TYPETYPE(arg2, "XtCallbackPopdown");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_XtCallbackPopdown(Widget arg0, XtPointer arg1, XtPointer arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallbackPopdown");
	return funcptr(arg0, arg1, arg2);
}

