// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbDescPtr, unsigned int, int) = 0;

void XkbFreeControls(XkbDescPtr arg0, unsigned int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeControls");
	validate_NULL_TYPETYPE(arg0, "XkbFreeControls");
	validate_NULL_TYPETYPE(arg1, "XkbFreeControls");
	validate_NULL_TYPETYPE(arg2, "XkbFreeControls");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_XkbFreeControls(XkbDescPtr arg0, unsigned int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeControls");
	return funcptr(arg0, arg1, arg2);
}

