// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XModifierKeymap *) = 0;

int XFreeModifiermap(XModifierKeymap * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFreeModifiermap");
	validate_NULL_TYPETYPE(arg0, "XFreeModifiermap");
	return funcptr(arg0);
}

int __lsb_XFreeModifiermap(XModifierKeymap * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFreeModifiermap");
	return funcptr(arg0);
}

