// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int *, int *) = 0;

int XSecurityQueryExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSecurityQueryExtension");
	validate_NULL_TYPETYPE(arg0, "XSecurityQueryExtension");
	validate_NULL_TYPETYPE(arg1, "XSecurityQueryExtension");
	validate_NULL_TYPETYPE(arg2, "XSecurityQueryExtension");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_XSecurityQueryExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSecurityQueryExtension");
	return funcptr(arg0, arg1, arg2);
}

