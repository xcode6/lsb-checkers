// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLfloat *) = 0;

void glGetConvolutionParameterfv(GLenum arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetConvolutionParameterfv");
	validate_NULL_TYPETYPE(arg0, "glGetConvolutionParameterfv");
	validate_NULL_TYPETYPE(arg1, "glGetConvolutionParameterfv");
	validate_NULL_TYPETYPE(arg2, "glGetConvolutionParameterfv");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glGetConvolutionParameterfv(GLenum arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetConvolutionParameterfv");
	return funcptr(arg0, arg1, arg2);
}

