// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLint *) = 0;

void glRasterPos3iv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos3iv");
	validate_NULL_TYPETYPE(arg0, "glRasterPos3iv");
	return funcptr(arg0);
}

void __lsb_glRasterPos3iv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos3iv");
	return funcptr(arg0);
}

