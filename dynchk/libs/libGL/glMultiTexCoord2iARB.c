// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLint, GLint) = 0;

void glMultiTexCoord2iARB(GLenum arg0, GLint arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2iARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord2iARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord2iARB");
	validate_NULL_TYPETYPE(arg2, "glMultiTexCoord2iARB");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glMultiTexCoord2iARB(GLenum arg0, GLint arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2iARB");
	return funcptr(arg0, arg1, arg2);
}

