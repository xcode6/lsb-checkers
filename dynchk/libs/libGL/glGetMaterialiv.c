// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLint *) = 0;

void glGetMaterialiv(GLenum arg0, GLenum arg1, GLint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetMaterialiv");
	validate_NULL_TYPETYPE(arg0, "glGetMaterialiv");
	validate_NULL_TYPETYPE(arg1, "glGetMaterialiv");
	validate_NULL_TYPETYPE(arg2, "glGetMaterialiv");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glGetMaterialiv(GLenum arg0, GLenum arg1, GLint * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetMaterialiv");
	return funcptr(arg0, arg1, arg2);
}

