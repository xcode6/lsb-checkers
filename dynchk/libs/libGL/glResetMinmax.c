// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum) = 0;

void glResetMinmax(GLenum arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glResetMinmax");
	validate_NULL_TYPETYPE(arg0, "glResetMinmax");
	return funcptr(arg0);
}

void __lsb_glResetMinmax(GLenum arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glResetMinmax");
	return funcptr(arg0);
}

