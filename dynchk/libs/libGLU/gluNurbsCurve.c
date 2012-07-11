// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#include <GL/gl.h>
#undef gluNurbsCurve
static void(*funcptr) (GLUnurbs * , GLint , GLfloat * , GLint , GLfloat * , GLint , GLenum ) = 0;

extern int __lsb_check_params;
void gluNurbsCurve (GLUnurbs * arg0 , GLint arg1 , GLfloat * arg2 , GLint arg3 , GLfloat * arg4 , GLint arg5 , GLenum arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluNurbsCurve()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluNurbsCurve");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluNurbsCurve. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluNurbsCurve() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluNurbsCurve - arg0 (nurb)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluNurbsCurve - arg0 (nurb)");
		validate_NULL_TYPETYPE(  arg1, "gluNurbsCurve - arg1 (knotCount)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gluNurbsCurve - arg2 (knots)");
		}
		validate_NULL_TYPETYPE(  arg2, "gluNurbsCurve - arg2 (knots)");
		validate_NULL_TYPETYPE(  arg3, "gluNurbsCurve - arg3 (stride)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gluNurbsCurve - arg4 (control)");
		}
		validate_NULL_TYPETYPE(  arg4, "gluNurbsCurve - arg4 (control)");
		validate_NULL_TYPETYPE(  arg5, "gluNurbsCurve - arg5 (order)");
		validate_NULL_TYPETYPE(  arg6, "gluNurbsCurve - arg6 (type)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
