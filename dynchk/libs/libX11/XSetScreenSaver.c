// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XSetScreenSaver
static int(*funcptr) (Display * , int , int , int , int ) = 0;

extern int __lsb_check_params;
int XSetScreenSaver (Display * arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XSetScreenSaver");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetScreenSaver()");
		validate_RWaddress( arg0, "XSetScreenSaver - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetScreenSaver - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetScreenSaver - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetScreenSaver - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetScreenSaver - arg3");
		validate_NULL_TYPETYPE(  arg4, "XSetScreenSaver - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

