// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int) = 0;

int XDisplayWidthMM(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDisplayWidthMM");
	validate_NULL_TYPETYPE(arg0, "XDisplayWidthMM");
	validate_NULL_TYPETYPE(arg1, "XDisplayWidthMM");
	return funcptr(arg0, arg1);
}

int __lsb_XDisplayWidthMM(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDisplayWidthMM");
	return funcptr(arg0, arg1);
}

