// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XEvent *) = 0;

Boolean XtPeekEvent(XEvent * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtPeekEvent");
	validate_NULL_TYPETYPE(arg0, "XtPeekEvent");
	return funcptr(arg0);
}

Boolean __lsb_XtPeekEvent(XEvent * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtPeekEvent");
	return funcptr(arg0);
}

