// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, unsigned int, XkbComponentNamesPtr, int *) = 0;

XkbComponentListPtr XkbListComponents(Display * arg0, unsigned int arg1, XkbComponentNamesPtr arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbListComponents");
	validate_NULL_TYPETYPE(arg0, "XkbListComponents");
	validate_NULL_TYPETYPE(arg1, "XkbListComponents");
	validate_NULL_TYPETYPE(arg2, "XkbListComponents");
	validate_NULL_TYPETYPE(arg3, "XkbListComponents");
	return funcptr(arg0, arg1, arg2, arg3);
}

XkbComponentListPtr __lsb_XkbListComponents(Display * arg0, unsigned int arg1, XkbComponentNamesPtr arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbListComponents");
	return funcptr(arg0, arg1, arg2, arg3);
}

