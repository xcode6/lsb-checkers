// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

int XtGetMultiClickTime(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetMultiClickTime");
	validate_NULL_TYPETYPE(arg0, "XtGetMultiClickTime");
	return funcptr(arg0);
}

int __lsb_XtGetMultiClickTime(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetMultiClickTime");
	return funcptr(arg0);
}

