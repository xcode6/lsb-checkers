// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

long XExtendedMaxRequestSize(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XExtendedMaxRequestSize");
	validate_NULL_TYPETYPE(arg0, "XExtendedMaxRequestSize");
	return funcptr(arg0);
}

long __lsb_XExtendedMaxRequestSize(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XExtendedMaxRequestSize");
	return funcptr(arg0);
}

