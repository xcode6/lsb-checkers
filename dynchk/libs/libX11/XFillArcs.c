// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XFillArcs
static int(*funcptr) (Display * , Drawable , GC , XArc * , int ) = 0;

extern int __lsb_check_params;
int XFillArcs (Display * arg0 , Drawable arg1 , GC arg2 , XArc * arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XFillArcs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XFillArcs()");
		validate_RWaddress( arg0, "XFillArcs - arg0");
		validate_NULL_TYPETYPE(  arg0, "XFillArcs - arg0");
		validate_NULL_TYPETYPE(  arg1, "XFillArcs - arg1");
		validate_NULL_TYPETYPE(  arg2, "XFillArcs - arg2");
		validate_RWaddress( arg3, "XFillArcs - arg3");
		validate_NULL_TYPETYPE(  arg3, "XFillArcs - arg3");
		validate_NULL_TYPETYPE(  arg4, "XFillArcs - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

