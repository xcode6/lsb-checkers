// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLfloat) = 0;

void glLightModelf(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLightModelf");
	validate_NULL_TYPETYPE(arg0, "glLightModelf");
	validate_NULL_TYPETYPE(arg1, "glLightModelf");
	return funcptr(arg0, arg1);
}

void __lsb_glLightModelf(GLenum arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLightModelf");
	return funcptr(arg0, arg1);
}

