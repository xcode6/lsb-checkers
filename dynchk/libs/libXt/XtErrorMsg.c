// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, char *, char *, char *, String *, Cardinal *) = 0;

void XtErrorMsg(char * arg0, char * arg1, char * arg2, char * arg3, String * arg4, Cardinal * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg0, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg1, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg2, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg3, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg4, "XtErrorMsg");
	validate_NULL_TYPETYPE(arg5, "XtErrorMsg");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void __lsb_XtErrorMsg(char * arg0, char * arg1, char * arg2, char * arg3, String * arg4, Cardinal * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtErrorMsg");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

