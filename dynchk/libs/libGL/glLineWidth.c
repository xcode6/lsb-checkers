// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat) = 0;

void glLineWidth(GLfloat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLineWidth");
	validate_NULL_TYPETYPE(arg0, "glLineWidth");
	return funcptr(arg0);
}

void __lsb_glLineWidth(GLfloat arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLineWidth");
	return funcptr(arg0);
}

