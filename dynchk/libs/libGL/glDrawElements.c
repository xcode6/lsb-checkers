// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLsizei, GLenum, GLvoid *) = 0;

void glDrawElements(GLenum arg0, GLsizei arg1, GLenum arg2, GLvoid * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDrawElements");
	validate_NULL_TYPETYPE(arg0, "glDrawElements");
	validate_NULL_TYPETYPE(arg1, "glDrawElements");
	validate_NULL_TYPETYPE(arg2, "glDrawElements");
	validate_NULL_TYPETYPE(arg3, "glDrawElements");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_glDrawElements(GLenum arg0, GLsizei arg1, GLenum arg2, GLvoid * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDrawElements");
	return funcptr(arg0, arg1, arg2, arg3);
}

