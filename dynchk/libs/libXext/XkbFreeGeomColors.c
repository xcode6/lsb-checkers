// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbGeometryPtr, int, int, int) = 0;

void XkbFreeGeomColors(XkbGeometryPtr arg0, int arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeGeomColors");
	validate_NULL_TYPETYPE(arg0, "XkbFreeGeomColors");
	validate_NULL_TYPETYPE(arg1, "XkbFreeGeomColors");
	validate_NULL_TYPETYPE(arg2, "XkbFreeGeomColors");
	validate_NULL_TYPETYPE(arg3, "XkbFreeGeomColors");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_XkbFreeGeomColors(XkbGeometryPtr arg0, int arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeGeomColors");
	return funcptr(arg0, arg1, arg2, arg3);
}

