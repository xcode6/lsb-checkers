// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLfloat) = 0;

void glTexEnvf(GLenum arg0, GLenum arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexEnvf");
	validate_NULL_TYPETYPE(arg0, "glTexEnvf");
	validate_NULL_TYPETYPE(arg1, "glTexEnvf");
	validate_NULL_TYPETYPE(arg2, "glTexEnvf");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glTexEnvf(GLenum arg0, GLenum arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexEnvf");
	return funcptr(arg0, arg1, arg2);
}

