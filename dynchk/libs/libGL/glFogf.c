// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLfloat) = 0;

void glFogf(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFogf");
	validate_NULL_TYPETYPE(arg0, "glFogf");
	validate_NULL_TYPETYPE(arg1, "glFogf");
	return funcptr(arg0, arg1);
}

void __lsb_glFogf(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFogf");
	return funcptr(arg0, arg1);
}

