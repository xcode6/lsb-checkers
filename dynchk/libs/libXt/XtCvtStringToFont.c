// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
static int(*funcptr)(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *) = 0;

Boolean XtCvtStringToFont(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg0, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg1, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg2, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg3, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg4, "XtCvtStringToFont");
	validate_NULL_TYPETYPE(arg5, "XtCvtStringToFont");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

Boolean __lsb_XtCvtStringToFont(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToFont");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

