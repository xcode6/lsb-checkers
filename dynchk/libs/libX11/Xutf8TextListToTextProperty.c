// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
static int(*funcptr)(Display *, char * *, int, XICCEncodingStyle, XTextProperty *) = 0;

int Xutf8TextListToTextProperty(Display * arg0, char * * arg1, int arg2, XICCEncodingStyle arg3, XTextProperty * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "Xutf8TextListToTextProperty");
	validate_NULL_TYPETYPE(arg0, "Xutf8TextListToTextProperty");
	validate_NULL_TYPETYPE(arg1, "Xutf8TextListToTextProperty");
	validate_NULL_TYPETYPE(arg2, "Xutf8TextListToTextProperty");
	validate_NULL_TYPETYPE(arg3, "Xutf8TextListToTextProperty");
	validate_NULL_TYPETYPE(arg4, "Xutf8TextListToTextProperty");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int __lsb_Xutf8TextListToTextProperty(Display * arg0, char * * arg1, int arg2, XICCEncodingStyle arg3, XTextProperty * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "Xutf8TextListToTextProperty");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

