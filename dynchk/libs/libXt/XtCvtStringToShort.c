// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
static int(*funcptr)(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *) = 0;

Boolean XtCvtStringToShort(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg0, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg1, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg2, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg3, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg4, "XtCvtStringToShort");
	validate_NULL_TYPETYPE(arg5, "XtCvtStringToShort");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

Boolean __lsb_XtCvtStringToShort(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToShort");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

