// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLdouble *) = 0;

void glTexCoord3dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3dv");
	validate_NULL_TYPETYPE(arg0, "glTexCoord3dv");
	return funcptr(arg0);
}

void __lsb_glTexCoord3dv(GLdouble * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord3dv");
	return funcptr(arg0);
}

