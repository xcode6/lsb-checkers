// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(_XExtData * *, XExtData *) = 0;

int XAddToExtensionList(_XExtData * * arg0, XExtData * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddToExtensionList");
	validate_NULL_TYPETYPE(arg0, "XAddToExtensionList");
	validate_NULL_TYPETYPE(arg1, "XAddToExtensionList");
	return funcptr(arg0, arg1);
}

int __lsb_XAddToExtensionList(_XExtData * * arg0, XExtData * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddToExtensionList");
	return funcptr(arg0, arg1);
}

