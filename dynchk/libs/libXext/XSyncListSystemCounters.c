// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int *) = 0;

XSyncSystemCounter * XSyncListSystemCounters(Display * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncListSystemCounters");
	validate_NULL_TYPETYPE(arg0, "XSyncListSystemCounters");
	validate_NULL_TYPETYPE(arg1, "XSyncListSystemCounters");
	return funcptr(arg0, arg1);
}

XSyncSystemCounter * __lsb_XSyncListSystemCounters(Display * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncListSystemCounters");
	return funcptr(arg0, arg1);
}

