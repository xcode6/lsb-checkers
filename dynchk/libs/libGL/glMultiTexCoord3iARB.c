// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLint, GLint, GLint) = 0;

void glMultiTexCoord3iARB(GLenum arg0, GLint arg1, GLint arg2, GLint arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord3iARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord3iARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord3iARB");
	validate_NULL_TYPETYPE(arg2, "glMultiTexCoord3iARB");
	validate_NULL_TYPETYPE(arg3, "glMultiTexCoord3iARB");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_glMultiTexCoord3iARB(GLenum arg0, GLint arg1, GLint arg2, GLint arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord3iARB");
	return funcptr(arg0, arg1, arg2, arg3);
}

