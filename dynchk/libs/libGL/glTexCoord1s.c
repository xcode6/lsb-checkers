// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLshort) = 0;

void glTexCoord1s(GLshort arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord1s");
	validate_NULL_TYPETYPE(arg0, "glTexCoord1s");
	return funcptr(arg0);
}

void __lsb_glTexCoord1s(GLshort arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord1s");
	return funcptr(arg0);
}

