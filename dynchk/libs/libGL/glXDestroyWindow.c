// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/glx.h>
static int(*funcptr)(Display *, GLXWindow) = 0;

void glXDestroyWindow(Display * arg0, GLXWindow arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXDestroyWindow");
	validate_NULL_TYPETYPE(arg0, "glXDestroyWindow");
	validate_NULL_TYPETYPE(arg1, "glXDestroyWindow");
	return funcptr(arg0, arg1);
}

void __lsb_glXDestroyWindow(Display * arg0, GLXWindow arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXDestroyWindow");
	return funcptr(arg0, arg1);
}

