// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int *) = 0;

char * * XListExtensions(Display * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListExtensions");
	validate_NULL_TYPETYPE(arg0, "XListExtensions");
	validate_NULL_TYPETYPE(arg1, "XListExtensions");
	return funcptr(arg0, arg1);
}

char * * __lsb_XListExtensions(Display * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XListExtensions");
	return funcptr(arg0, arg1);
}

