// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeCombineRectangles
static void(*funcptr) (Display * , Window , int , int , int , XRectangle * , int , int , int ) = 0;

extern int __lsb_check_params;
void XShapeCombineRectangles (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 , XRectangle * arg5 , int arg6 , int arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XShapeCombineRectangles ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XShapeCombineRectangles()");
		validate_RWaddress( arg0, "XShapeCombineRectangles - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShapeCombineRectangles - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeCombineRectangles - arg1");
		validate_NULL_TYPETYPE(  arg2, "XShapeCombineRectangles - arg2");
		validate_NULL_TYPETYPE(  arg3, "XShapeCombineRectangles - arg3");
		validate_NULL_TYPETYPE(  arg4, "XShapeCombineRectangles - arg4");
		validate_RWaddress( arg5, "XShapeCombineRectangles - arg5");
		validate_NULL_TYPETYPE(  arg5, "XShapeCombineRectangles - arg5");
		validate_NULL_TYPETYPE(  arg6, "XShapeCombineRectangles - arg6");
		validate_NULL_TYPETYPE(  arg7, "XShapeCombineRectangles - arg7");
		validate_NULL_TYPETYPE(  arg8, "XShapeCombineRectangles - arg8");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}

