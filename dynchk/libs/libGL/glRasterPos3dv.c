// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLdouble *) = 0;

void glRasterPos3dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos3dv");
	validate_NULL_TYPETYPE(arg0, "glRasterPos3dv");
	return funcptr(arg0);
}

void __lsb_glRasterPos3dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos3dv");
	return funcptr(arg0);
}

