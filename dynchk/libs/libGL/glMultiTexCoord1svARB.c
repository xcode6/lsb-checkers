// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/gl.h>
#undef glMultiTexCoord1svARB
static void(*funcptr) (GLenum , const GLshort * ) = 0;

extern int __lsb_check_params;
void glMultiTexCoord1svARB (GLenum arg0 , const GLshort * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for glMultiTexCoord1svARB()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord1svARB");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load glMultiTexCoord1svARB. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "glMultiTexCoord1svARB() - validating");
		validate_NULL_TYPETYPE(  arg0, "glMultiTexCoord1svARB - arg0 (target)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "glMultiTexCoord1svARB - arg1 (v)");
		}
		validate_NULL_TYPETYPE(  arg1, "glMultiTexCoord1svARB - arg1 (v)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

