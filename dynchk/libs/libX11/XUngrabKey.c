// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, int, unsigned int, Window) = 0;

int XUngrabKey(Display * arg0, int arg1, unsigned int arg2, Window arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XUngrabKey");
	validate_NULL_TYPETYPE(arg0, "XUngrabKey");
	validate_NULL_TYPETYPE(arg1, "XUngrabKey");
	validate_NULL_TYPETYPE(arg2, "XUngrabKey");
	validate_NULL_TYPETYPE(arg3, "XUngrabKey");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_XUngrabKey(Display * arg0, int arg1, unsigned int arg2, Window arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XUngrabKey");
	return funcptr(arg0, arg1, arg2, arg3);
}

