// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLushort, GLushort, GLushort, GLushort) = 0;

void glColor4us(GLushort arg0, GLushort arg1, GLushort arg2, GLushort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4us");
	validate_NULL_TYPETYPE(arg0, "glColor4us");
	validate_NULL_TYPETYPE(arg1, "glColor4us");
	validate_NULL_TYPETYPE(arg2, "glColor4us");
	validate_NULL_TYPETYPE(arg3, "glColor4us");
	return funcptr(arg0, arg1, arg2, arg3);
}

void __lsb_glColor4us(GLushort arg0, GLushort arg1, GLushort arg2, GLushort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4us");
	return funcptr(arg0, arg1, arg2, arg3);
}

