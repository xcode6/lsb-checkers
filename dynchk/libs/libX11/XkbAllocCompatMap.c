// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbDescPtr, unsigned int, unsigned int) = 0;

int XkbAllocCompatMap(XkbDescPtr arg0, unsigned int arg1, unsigned int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocCompatMap");
	validate_NULL_TYPETYPE(arg0, "XkbAllocCompatMap");
	validate_NULL_TYPETYPE(arg1, "XkbAllocCompatMap");
	validate_NULL_TYPETYPE(arg2, "XkbAllocCompatMap");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XkbAllocCompatMap(XkbDescPtr arg0, unsigned int arg1, unsigned int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocCompatMap");
	return funcptr(arg0, arg1, arg2);
}

