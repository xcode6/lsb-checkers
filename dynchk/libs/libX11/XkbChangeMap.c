// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, XkbDescPtr, XkbMapChangesPtr) = 0;

 XkbChangeMap(Display * arg0, XkbDescPtr arg1, XkbMapChangesPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbChangeMap");
	validate_NULL_TYPETYPE(arg0, "XkbChangeMap");
	validate_NULL_TYPETYPE(arg1, "XkbChangeMap");
	validate_NULL_TYPETYPE(arg2, "XkbChangeMap");
	return funcptr(arg0, arg1, arg2);
}

 __lsb_XkbChangeMap(Display * arg0, XkbDescPtr arg1, XkbMapChangesPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbChangeMap");
	return funcptr(arg0, arg1, arg2);
}

