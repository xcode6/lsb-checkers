// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XDrawString16
static int(*funcptr) (Display * , Drawable , GC , int , int , const XChar2b * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XDrawString16 (Display * arg0 , Drawable arg1 , GC arg2 , int arg3 , int arg4 , const XChar2b * arg5 , int arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDrawString16");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XDrawString16()");
	validate_Rdaddress( arg0, "XDrawString16 - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDrawString16 - arg0");
		validate_NULL_TYPETYPE(  arg1, "XDrawString16 - arg1");
		validate_NULL_TYPETYPE(  arg2, "XDrawString16 - arg2");
		validate_NULL_TYPETYPE(  arg3, "XDrawString16 - arg3");
		validate_NULL_TYPETYPE(  arg4, "XDrawString16 - arg4");
	validate_Rdaddress( arg5, "XDrawString16 - arg5");
		validate_NULL_TYPETYPE(  arg5, "XDrawString16 - arg5");
		validate_NULL_TYPETYPE(  arg6, "XDrawString16 - arg6");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

