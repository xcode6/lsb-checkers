// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble) = 0;

void glVertex2d(GLdouble arg0, GLdouble arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2d");
	validate_NULL_TYPETYPE(arg0, "glVertex2d");
	validate_NULL_TYPETYPE(arg1, "glVertex2d");
	return funcptr(arg0, arg1);
}

void __lsb_glVertex2d(GLdouble arg0, GLdouble arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2d");
	return funcptr(arg0, arg1);
}

