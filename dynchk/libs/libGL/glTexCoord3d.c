// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble, GLdouble) = 0;

void glTexCoord3d(GLdouble arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3d");
	validate_NULL_TYPETYPE(arg0, "glTexCoord3d");
	validate_NULL_TYPETYPE(arg1, "glTexCoord3d");
	validate_NULL_TYPETYPE(arg2, "glTexCoord3d");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glTexCoord3d(GLdouble arg0, GLdouble arg1, GLdouble arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3d");
	return funcptr(arg0, arg1, arg2);
}

