// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLuint, GLuint, GLuint) = 0;

void glColor3ui(GLuint arg0, GLuint arg1, GLuint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ui");
	validate_NULL_TYPETYPE(arg0, "glColor3ui");
	validate_NULL_TYPETYPE(arg1, "glColor3ui");
	validate_NULL_TYPETYPE(arg2, "glColor3ui");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glColor3ui(GLuint arg0, GLuint arg1, GLuint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ui");
	return funcptr(arg0, arg1, arg2);
}

