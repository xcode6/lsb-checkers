// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
static int(*funcptr)(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *) = 0;

Boolean XtCvtStringToDimension(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg0, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg1, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg2, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg3, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg4, "XtCvtStringToDimension");
	validate_NULL_TYPETYPE(arg5, "XtCvtStringToDimension");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

Boolean __lsb_XtCvtStringToDimension(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToDimension");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

