// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, XkbDescPtr, XkbNameChangesPtr) = 0;

 XkbChangeNames(Display * arg0, XkbDescPtr arg1, XkbNameChangesPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbChangeNames");
	validate_NULL_TYPETYPE(arg0, "XkbChangeNames");
	validate_NULL_TYPETYPE(arg1, "XkbChangeNames");
	validate_NULL_TYPETYPE(arg2, "XkbChangeNames");
	return funcptr(arg0, arg1, arg2);
}

 __lsb_XkbChangeNames(Display * arg0, XkbDescPtr arg1, XkbNameChangesPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbChangeNames");
	return funcptr(arg0, arg1, arg2);
}

