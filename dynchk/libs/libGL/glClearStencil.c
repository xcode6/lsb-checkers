// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLint) = 0;

void glClearStencil(GLint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glClearStencil");
	validate_NULL_TYPETYPE(arg0, "glClearStencil");
	return funcptr(arg0);
}

void __lsb_glClearStencil(GLint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glClearStencil");
	return funcptr(arg0);
}

