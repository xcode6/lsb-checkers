// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) = 0;

void glFrustum(GLdouble arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3, GLdouble arg4, GLdouble arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFrustum");
	validate_NULL_TYPETYPE(arg0, "glFrustum");
	validate_NULL_TYPETYPE(arg1, "glFrustum");
	validate_NULL_TYPETYPE(arg2, "glFrustum");
	validate_NULL_TYPETYPE(arg3, "glFrustum");
	validate_NULL_TYPETYPE(arg4, "glFrustum");
	validate_NULL_TYPETYPE(arg5, "glFrustum");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void __lsb_glFrustum(GLdouble arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3, GLdouble arg4, GLdouble arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFrustum");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

