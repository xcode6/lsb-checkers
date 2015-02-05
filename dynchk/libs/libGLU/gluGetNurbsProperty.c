// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#include <GL/gl.h>
#undef gluGetNurbsProperty
static void(*funcptr) (GLUnurbs * , GLenum , GLfloat * ) = 0;

extern int __lsb_check_params;
void gluGetNurbsProperty (GLUnurbs * arg0 , GLenum arg1 , GLfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluGetNurbsProperty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluGetNurbsProperty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluGetNurbsProperty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluGetNurbsProperty() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluGetNurbsProperty - arg0 (nurb)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluGetNurbsProperty - arg0 (nurb)");
		validate_NULL_TYPETYPE(  arg1, "gluGetNurbsProperty - arg1 (property)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gluGetNurbsProperty - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "gluGetNurbsProperty - arg2 (data)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
