// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLfloat, GLfloat) = 0;

void glMultiTexCoord2fARB(GLenum arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2fARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord2fARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord2fARB");
	validate_NULL_TYPETYPE(arg2, "glMultiTexCoord2fARB");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glMultiTexCoord2fARB(GLenum arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord2fARB");
	return funcptr(arg0, arg1, arg2);
}

