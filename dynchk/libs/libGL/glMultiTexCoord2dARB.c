// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLdouble, GLdouble) = 0;

void glMultiTexCoord2dARB(GLenum arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2dARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord2dARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord2dARB");
	validate_NULL_TYPETYPE(arg2, "glMultiTexCoord2dARB");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glMultiTexCoord2dARB(GLenum arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2dARB");
	return funcptr(arg0, arg1, arg2);
}

