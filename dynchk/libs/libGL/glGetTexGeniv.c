// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLint *) = 0;

void glGetTexGeniv(GLenum arg0, GLenum arg1, GLint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexGeniv");
	validate_NULL_TYPETYPE(arg0, "glGetTexGeniv");
	validate_NULL_TYPETYPE(arg1, "glGetTexGeniv");
	validate_NULL_TYPETYPE(arg2, "glGetTexGeniv");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glGetTexGeniv(GLenum arg0, GLenum arg1, GLint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexGeniv");
	return funcptr(arg0, arg1, arg2);
}

