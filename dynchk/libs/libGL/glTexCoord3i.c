// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLint, GLint, GLint) = 0;

void glTexCoord3i(GLint arg0, GLint arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3i");
	validate_NULL_TYPETYPE(arg0, "glTexCoord3i");
	validate_NULL_TYPETYPE(arg1, "glTexCoord3i");
	validate_NULL_TYPETYPE(arg2, "glTexCoord3i");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glTexCoord3i(GLint arg0, GLint arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3i");
	return funcptr(arg0, arg1, arg2);
}

