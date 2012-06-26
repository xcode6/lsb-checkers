// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <GL/glu.h>
#include <GL/gl.h>
#undef gluQuadricCallback
static void(*funcptr) (GLUquadric * , GLenum , _GLUfuncptr ) = 0;

extern int __lsb_check_params;
void gluQuadricCallback (GLUquadric * arg0 , GLenum arg1 , _GLUfuncptr arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gluQuadricCallback()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gluQuadricCallback");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gluQuadricCallback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gluQuadricCallback() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gluQuadricCallback - arg0 (quad)");
		}
		validate_NULL_TYPETYPE(  arg0, "gluQuadricCallback - arg0 (quad)");
		validate_NULL_TYPETYPE(  arg1, "gluQuadricCallback - arg1 (which)");
		validate_NULL_TYPETYPE(  arg2, "gluQuadricCallback - arg2 (CallBackFunc)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

