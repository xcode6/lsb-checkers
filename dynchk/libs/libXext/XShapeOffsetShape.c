// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeOffsetShape
static void(*funcptr) (Display * , Window , int , int , int ) = 0;

extern int __lsb_check_params;
void XShapeOffsetShape (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XShapeOffsetShape()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeOffsetShape");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XShapeOffsetShape. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShapeOffsetShape() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XShapeOffsetShape - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XShapeOffsetShape - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeOffsetShape - arg1");
		validate_NULL_TYPETYPE(  arg2, "XShapeOffsetShape - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShapeOffsetShape - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShapeOffsetShape - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

