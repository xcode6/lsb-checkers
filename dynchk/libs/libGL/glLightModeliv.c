// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLint *) = 0;

void glLightModeliv(GLenum arg0, GLint * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLightModeliv");
	validate_NULL_TYPETYPE(arg0, "glLightModeliv");
	validate_NULL_TYPETYPE(arg1, "glLightModeliv");
	return funcptr(arg0, arg1);
}

void __lsb_glLightModeliv(GLenum arg0, GLint * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLightModeliv");
	return funcptr(arg0, arg1);
}

