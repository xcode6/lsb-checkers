// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLuint) = 0;

void glCallList(GLuint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCallList");
	validate_NULL_TYPETYPE(arg0, "glCallList");
	return funcptr(arg0);
}

void __lsb_glCallList(GLuint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCallList");
	return funcptr(arg0);
}

