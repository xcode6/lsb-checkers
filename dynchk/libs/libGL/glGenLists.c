// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLsizei) = 0;

GLuint glGenLists(GLsizei arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGenLists");
	validate_NULL_TYPETYPE(arg0, "glGenLists");
	return funcptr(arg0);
}

GLuint __lsb_glGenLists(GLsizei arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGenLists");
	return funcptr(arg0);
}

