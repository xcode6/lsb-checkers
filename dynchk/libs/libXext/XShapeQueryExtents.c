// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeQueryExtents
static int(*funcptr) (Display * , Window , int * , int * , int * , unsigned int * , unsigned int * , int * , int * , int * , unsigned int * , unsigned int * ) = 0;

extern int __lsb_check_params;
int XShapeQueryExtents (Display * arg0 , Window arg1 , int * arg2 , int * arg3 , int * arg4 , unsigned int * arg5 , unsigned int * arg6 , int * arg7 , int * arg8 , int * arg9 , unsigned int * arg10 , unsigned int * arg11 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XShapeQueryExtents");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShapeQueryExtents()");
		validate_RWaddress( arg0, "XShapeQueryExtents - arg0");
		validate_NULL_TYPETYPE(  arg0, "XShapeQueryExtents - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeQueryExtents - arg1");
		validate_RWaddress( arg2, "XShapeQueryExtents - arg2");
		validate_NULL_TYPETYPE(  arg2, "XShapeQueryExtents - arg2");
		validate_RWaddress( arg3, "XShapeQueryExtents - arg3");
		validate_NULL_TYPETYPE(  arg3, "XShapeQueryExtents - arg3");
		validate_RWaddress( arg4, "XShapeQueryExtents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XShapeQueryExtents - arg4");
		validate_RWaddress( arg5, "XShapeQueryExtents - arg5");
		validate_NULL_TYPETYPE(  arg5, "XShapeQueryExtents - arg5");
		validate_RWaddress( arg6, "XShapeQueryExtents - arg6");
		validate_NULL_TYPETYPE(  arg6, "XShapeQueryExtents - arg6");
		validate_RWaddress( arg7, "XShapeQueryExtents - arg7");
		validate_NULL_TYPETYPE(  arg7, "XShapeQueryExtents - arg7");
		validate_RWaddress( arg8, "XShapeQueryExtents - arg8");
		validate_NULL_TYPETYPE(  arg8, "XShapeQueryExtents - arg8");
		validate_RWaddress( arg9, "XShapeQueryExtents - arg9");
		validate_NULL_TYPETYPE(  arg9, "XShapeQueryExtents - arg9");
		validate_RWaddress( arg10, "XShapeQueryExtents - arg10");
		validate_NULL_TYPETYPE(  arg10, "XShapeQueryExtents - arg10");
		validate_RWaddress( arg11, "XShapeQueryExtents - arg11");
		validate_NULL_TYPETYPE(  arg11, "XShapeQueryExtents - arg11");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
	__lsb_check_params = reset_flag;
	return ret_value;
}

