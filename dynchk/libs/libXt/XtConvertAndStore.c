// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, char *, XrmValue *, char *, XrmValue *) = 0;

Boolean XtConvertAndStore(Widget arg0, char * arg1, XrmValue * arg2, char * arg3, XrmValue * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConvertAndStore");
	validate_NULL_TYPETYPE(arg0, "XtConvertAndStore");
	validate_NULL_TYPETYPE(arg1, "XtConvertAndStore");
	validate_NULL_TYPETYPE(arg2, "XtConvertAndStore");
	validate_NULL_TYPETYPE(arg3, "XtConvertAndStore");
	validate_NULL_TYPETYPE(arg4, "XtConvertAndStore");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

Boolean __lsb_XtConvertAndStore(Widget arg0, char * arg1, XrmValue * arg2, char * arg3, XrmValue * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConvertAndStore");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

