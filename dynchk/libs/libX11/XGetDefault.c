// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, char *, char *) = 0;

char * XGetDefault(Display * arg0, char * arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetDefault");
	validate_NULL_TYPETYPE(arg0, "XGetDefault");
	validate_NULL_TYPETYPE(arg1, "XGetDefault");
	validate_NULL_TYPETYPE(arg2, "XGetDefault");
	return funcptr(arg0, arg1, arg2);
}

char * __lsb_XGetDefault(Display * arg0, char * arg1, char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetDefault");
	return funcptr(arg0, arg1, arg2);
}

