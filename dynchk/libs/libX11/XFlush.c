// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

int XFlush(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFlush");
	validate_NULL_TYPETYPE(arg0, "XFlush");
	return funcptr(arg0);
}

int __lsb_XFlush(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XFlush");
	return funcptr(arg0);
}

