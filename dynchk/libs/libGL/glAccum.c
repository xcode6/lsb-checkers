// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLfloat) = 0;

void glAccum(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glAccum");
	validate_NULL_TYPETYPE(arg0, "glAccum");
	validate_NULL_TYPETYPE(arg1, "glAccum");
	return funcptr(arg0, arg1);
}

void __lsb_glAccum(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glAccum");
	return funcptr(arg0, arg1);
}

