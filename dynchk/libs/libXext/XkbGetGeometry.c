// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, XkbDescPtr) = 0;

int XkbGetGeometry(Display * arg0, XkbDescPtr arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetGeometry");
	validate_NULL_TYPETYPE(arg0, "XkbGetGeometry");
	validate_NULL_TYPETYPE(arg1, "XkbGetGeometry");
	return funcptr(arg0, arg1);
}

int __lsb_XkbGetGeometry(Display * arg0, XkbDescPtr arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetGeometry");
	return funcptr(arg0, arg1);
}

