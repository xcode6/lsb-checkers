// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat) = 0;

void glPointSize(GLfloat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPointSize");
	validate_NULL_TYPETYPE(arg0, "glPointSize");
	return funcptr(arg0);
}

void __lsb_glPointSize(GLfloat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPointSize");
	return funcptr(arg0);
}

