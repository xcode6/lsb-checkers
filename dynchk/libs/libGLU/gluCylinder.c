// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#include <GL/gl.h>
#undef gluCylinder
static void(*funcptr) (GLUquadric * , GLdouble , GLdouble , GLdouble , GLint , GLint ) = 0;

extern int __lsb_check_params;
void gluCylinder (GLUquadric * arg0 , GLdouble arg1 , GLdouble arg2 , GLdouble arg3 , GLint arg4 , GLint arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluCylinder()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluCylinder");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluCylinder. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluCylinder() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluCylinder - arg0 (quad)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluCylinder - arg0 (quad)");
		validate_NULL_TYPETYPE(  arg1, "gluCylinder - arg1 (base)");
		validate_NULL_TYPETYPE(  arg2, "gluCylinder - arg2 (top)");
		validate_NULL_TYPETYPE(  arg3, "gluCylinder - arg3 (height)");
		validate_NULL_TYPETYPE(  arg4, "gluCylinder - arg4 (slices)");
		validate_NULL_TYPETYPE(  arg5, "gluCylinder - arg5 (stacks)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
