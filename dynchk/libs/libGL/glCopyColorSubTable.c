// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLsizei, GLint, GLint, GLsizei) = 0;

void glCopyColorSubTable(GLenum arg0, GLsizei arg1, GLint arg2, GLint arg3, GLsizei arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCopyColorSubTable");
	validate_NULL_TYPETYPE(arg0, "glCopyColorSubTable");
	validate_NULL_TYPETYPE(arg1, "glCopyColorSubTable");
	validate_NULL_TYPETYPE(arg2, "glCopyColorSubTable");
	validate_NULL_TYPETYPE(arg3, "glCopyColorSubTable");
	validate_NULL_TYPETYPE(arg4, "glCopyColorSubTable");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void __lsb_glCopyColorSubTable(GLenum arg0, GLsizei arg1, GLint arg2, GLint arg3, GLsizei arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCopyColorSubTable");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

