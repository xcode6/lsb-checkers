// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble, GLdouble) = 0;

void glVertex3d(GLdouble arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3d");
	validate_NULL_TYPETYPE(arg0, "glVertex3d");
	validate_NULL_TYPETYPE(arg1, "glVertex3d");
	validate_NULL_TYPETYPE(arg2, "glVertex3d");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glVertex3d(GLdouble arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3d");
	return funcptr(arg0, arg1, arg2);
}

