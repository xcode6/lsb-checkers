// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Atom, Window, Time) = 0;

int XSetSelectionOwner(Display * arg0, Atom arg1, Window arg2, Time arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetSelectionOwner");
	validate_NULL_TYPETYPE(arg0, "XSetSelectionOwner");
	validate_NULL_TYPETYPE(arg1, "XSetSelectionOwner");
	validate_NULL_TYPETYPE(arg2, "XSetSelectionOwner");
	validate_NULL_TYPETYPE(arg3, "XSetSelectionOwner");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XSetSelectionOwner(Display * arg0, Atom arg1, Window arg2, Time arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetSelectionOwner");
	return funcptr(arg0, arg1, arg2, arg3);
}

