// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *) = 0;

void glColorTable(GLenum arg0, GLenum arg1, GLsizei arg2, GLenum arg3, GLenum arg4, GLvoid * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColorTable");
	validate_NULL_TYPETYPE(arg0, "glColorTable");
	validate_NULL_TYPETYPE(arg1, "glColorTable");
	validate_NULL_TYPETYPE(arg2, "glColorTable");
	validate_NULL_TYPETYPE(arg3, "glColorTable");
	validate_NULL_TYPETYPE(arg4, "glColorTable");
	validate_NULL_TYPETYPE(arg5, "glColorTable");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void __lsb_glColorTable(GLenum arg0, GLenum arg1, GLsizei arg2, GLenum arg3, GLenum arg4, GLvoid * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColorTable");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

