// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum) = 0;

GLboolean glIsEnabled(GLenum arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIsEnabled");
	validate_NULL_TYPETYPE(arg0, "glIsEnabled");
	return funcptr(arg0);
}

GLboolean __lsb_glIsEnabled(GLenum arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glIsEnabled");
	return funcptr(arg0);
}

