// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) = 0;

void glMultiTexCoord4dARB(GLenum arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3, GLdouble arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord4dARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord4dARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord4dARB");
	validate_NULL_TYPETYPE(arg2, "glMultiTexCoord4dARB");
	validate_NULL_TYPETYPE(arg3, "glMultiTexCoord4dARB");
	validate_NULL_TYPETYPE(arg4, "glMultiTexCoord4dARB");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void __lsb_glMultiTexCoord4dARB(GLenum arg0, GLdouble arg1, GLdouble arg2, GLdouble arg3, GLdouble arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord4dARB");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

