// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XWindowEvent
static int(*funcptr) (Display * , Window , long , XEvent * ) = 0;

extern int __lsb_check_params;
int XWindowEvent (Display * arg0 , Window arg1 , long arg2 , XEvent * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XWindowEvent ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XWindowEvent()");
		validate_RWaddress( arg0, "XWindowEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XWindowEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XWindowEvent - arg1");
		validate_NULL_TYPETYPE(  arg2, "XWindowEvent - arg2");
		validate_RWaddress( arg3, "XWindowEvent - arg3");
		validate_NULL_TYPETYPE(  arg3, "XWindowEvent - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

