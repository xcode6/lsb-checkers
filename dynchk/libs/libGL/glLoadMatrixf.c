// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLfloat *) = 0;

void glLoadMatrixf(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadMatrixf");
	validate_NULL_TYPETYPE(arg0, "glLoadMatrixf");
	return funcptr(arg0);
}

void __lsb_glLoadMatrixf(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadMatrixf");
	return funcptr(arg0);
}

