// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLshort, GLshort, GLshort, GLshort) = 0;

void glColor4s(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4s");
	validate_NULL_TYPETYPE(arg0, "glColor4s");
	validate_NULL_TYPETYPE(arg1, "glColor4s");
	validate_NULL_TYPETYPE(arg2, "glColor4s");
	validate_NULL_TYPETYPE(arg3, "glColor4s");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_glColor4s(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4s");
	return funcptr(arg0, arg1, arg2, arg3);
}

