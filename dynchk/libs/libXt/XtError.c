// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *) = 0;

void XtError(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtError");
	validate_NULL_TYPETYPE(arg0, "XtError");
	return funcptr(arg0);
}

void __lsb_XtError(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtError");
	return funcptr(arg0);
}

