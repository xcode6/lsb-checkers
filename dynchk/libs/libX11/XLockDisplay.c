// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

void XLockDisplay(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLockDisplay");
	validate_NULL_TYPETYPE(arg0, "XLockDisplay");
	return funcptr(arg0);
}

void __lsb_XLockDisplay(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLockDisplay");
	return funcptr(arg0);
}

