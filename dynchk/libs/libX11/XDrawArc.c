// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDrawArc
static int(*funcptr) (Display * , Drawable , GC , int , int , unsigned int , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XDrawArc (Display * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , unsigned int arg5 , unsigned int arg6 , int arg7 , int arg8 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawArc");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDrawArc()");
	validate_RWaddress( arg0, "XDrawArc - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDrawArc - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDrawArc - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDrawArc - arg2");
		validate_NULL_TYPETYPE(  arg3, "XDrawArc - arg3");
		validate_NULL_TYPETYPE(  arg4, "XDrawArc - arg4");
		validate_NULL_TYPETYPE(  arg5, "XDrawArc - arg5");
		validate_NULL_TYPETYPE(  arg6, "XDrawArc - arg6");
		validate_NULL_TYPETYPE(  arg7, "XDrawArc - arg7");
		validate_NULL_TYPETYPE(  arg8, "XDrawArc - arg8");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
	return ret_value;
}

