// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/glx.h>
static int(*funcptr)(Display *, GLXContext, int, int *) = 0;

int glXQueryContext(Display * arg0, GLXContext arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXQueryContext");
	validate_NULL_TYPETYPE(arg0, "glXQueryContext");
	validate_NULL_TYPETYPE(arg1, "glXQueryContext");
	validate_NULL_TYPETYPE(arg2, "glXQueryContext");
	validate_NULL_TYPETYPE(arg3, "glXQueryContext");
	return funcptr(arg0, arg1, arg2, arg3);
}

int __lsb_glXQueryContext(Display * arg0, GLXContext arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXQueryContext");
	return funcptr(arg0, arg1, arg2, arg3);
}

