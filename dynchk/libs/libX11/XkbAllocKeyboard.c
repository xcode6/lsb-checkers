// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

XkbDescPtr XkbAllocKeyboard(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocKeyboard");
	validate_NULL_TYPETYPE(arg0, "XkbAllocKeyboard");
	return funcptr(arg0);
}

XkbDescPtr __lsb_XkbAllocKeyboard(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbAllocKeyboard");
	return funcptr(arg0);
}

