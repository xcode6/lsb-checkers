// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLsizei, GLuint *, GLboolean *) = 0;

GLboolean glAreTexturesResident(GLsizei arg0, GLuint * arg1, GLboolean * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glAreTexturesResident");
	validate_NULL_TYPETYPE(arg0, "glAreTexturesResident");
	validate_NULL_TYPETYPE(arg1, "glAreTexturesResident");
	validate_NULL_TYPETYPE(arg2, "glAreTexturesResident");
	return funcptr(arg0, arg1, arg2);
}

GLboolean __lsb_glAreTexturesResident(GLsizei arg0, GLuint * arg1, GLboolean * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glAreTexturesResident");
	return funcptr(arg0, arg1, arg2);
}

