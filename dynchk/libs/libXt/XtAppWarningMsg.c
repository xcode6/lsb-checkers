// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtAppContext, char *, char *, char *, char *, String *, Cardinal *) = 0;

void XtAppWarningMsg(XtAppContext arg0, char * arg1, char * arg2, char * arg3, char * arg4, String * arg5, Cardinal * arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg0, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg1, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg2, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg3, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg4, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg5, "XtAppWarningMsg");
	validate_NULL_TYPETYPE(arg6, "XtAppWarningMsg");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void __lsb_XtAppWarningMsg(XtAppContext arg0, char * arg1, char * arg2, char * arg3, char * arg4, String * arg5, Cardinal * arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppWarningMsg");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

