// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble, GLdouble, GLdouble) = 0;

void glRasterPos4d(GLdouble arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4d");
	validate_NULL_TYPETYPE(arg0, "glRasterPos4d");
	validate_NULL_TYPETYPE(arg1, "glRasterPos4d");
	validate_NULL_TYPETYPE(arg2, "glRasterPos4d");
	validate_NULL_TYPETYPE(arg3, "glRasterPos4d");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_glRasterPos4d(GLdouble arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4d");
	return funcptr(arg0, arg1, arg2, arg3);
}

