// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, unsigned int, XkbDescPtr) = 0;

int XkbSetMap(Display * arg0, unsigned int arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetMap");
	validate_NULL_TYPETYPE(arg0, "XkbSetMap");
	validate_NULL_TYPETYPE(arg1, "XkbSetMap");
	validate_NULL_TYPETYPE(arg2, "XkbSetMap");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XkbSetMap(Display * arg0, unsigned int arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetMap");
	return funcptr(arg0, arg1, arg2);
}

