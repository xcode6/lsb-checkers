// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <GL/gl.h>
#undef glAreTexturesResident
static GLboolean(*funcptr) (GLsizei , GLuint * , GLboolean * ) = 0;

extern int __lsb_check_params;
GLboolean glAreTexturesResident (GLsizei arg0 , GLuint * arg1 , GLboolean * arg2 )
{
	int reset_flag = __lsb_check_params;
	GLboolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " glAreTexturesResident ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "glAreTexturesResident()");
		validate_NULL_TYPETYPE(  arg0, "glAreTexturesResident - arg0");
		validate_RWaddress( arg1, "glAreTexturesResident - arg1");
		validate_NULL_TYPETYPE(  arg1, "glAreTexturesResident - arg1");
		validate_RWaddress( arg2, "glAreTexturesResident - arg2");
		validate_NULL_TYPETYPE(  arg2, "glAreTexturesResident - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

