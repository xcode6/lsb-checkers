// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

XrmDatabase * XtGetErrorDatabase(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetErrorDatabase");
	validate_NULL_TYPETYPE(arg0, "XtGetErrorDatabase");
	return funcptr(arg0);
}

XrmDatabase * __lsb_XtGetErrorDatabase(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetErrorDatabase");
	return funcptr(arg0);
}

