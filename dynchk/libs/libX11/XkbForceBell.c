// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int) = 0;

int XkbForceBell(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbForceBell");
	validate_NULL_TYPETYPE(arg0, "XkbForceBell");
	validate_NULL_TYPETYPE(arg1, "XkbForceBell");
	return funcptr(arg0, arg1);
}

int __lsb_XkbForceBell(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbForceBell");
	return funcptr(arg0, arg1);
}

