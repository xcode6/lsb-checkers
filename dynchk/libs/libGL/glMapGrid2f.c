// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) = 0;

void glMapGrid2f(GLint arg0, GLfloat arg1, GLfloat arg2, GLint arg3, GLfloat arg4, GLfloat arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg0, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg1, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg2, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg3, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg4, "glMapGrid2f");
	validate_NULL_TYPETYPE(arg5, "glMapGrid2f");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void __lsb_glMapGrid2f(GLint arg0, GLfloat arg1, GLfloat arg2, GLint arg3, GLfloat arg4, GLfloat arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMapGrid2f");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

