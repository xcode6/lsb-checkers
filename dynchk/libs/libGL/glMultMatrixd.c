// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLdouble *) = 0;

void glMultMatrixd(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultMatrixd");
	validate_NULL_TYPETYPE(arg0, "glMultMatrixd");
	return funcptr(arg0);
}

void __lsb_glMultMatrixd(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultMatrixd");
	return funcptr(arg0);
}

