// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLdouble *) = 0;

void glEvalCoord1dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glEvalCoord1dv");
	validate_NULL_TYPETYPE(arg0, "glEvalCoord1dv");
	return funcptr(arg0);
}

void __lsb_glEvalCoord1dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glEvalCoord1dv");
	return funcptr(arg0);
}

