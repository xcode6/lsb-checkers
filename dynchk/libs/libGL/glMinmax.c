// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLboolean) = 0;

void glMinmax(GLenum arg0, GLenum arg1, GLboolean arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMinmax");
	validate_NULL_TYPETYPE(arg0, "glMinmax");
	validate_NULL_TYPETYPE(arg1, "glMinmax");
	validate_NULL_TYPETYPE(arg2, "glMinmax");
	return funcptr(arg0, arg1, arg2);
}

void __lsb_glMinmax(GLenum arg0, GLenum arg1, GLboolean arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMinmax");
	return funcptr(arg0, arg1, arg2);
}

