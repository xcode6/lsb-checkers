// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XPutBackEvent
static int(*funcptr) (Display * , XEvent * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XPutBackEvent (Display * arg0 , XEvent * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XPutBackEvent");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XPutBackEvent()");
	validate_RWaddress( arg0, "XPutBackEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XPutBackEvent - arg0");
	validate_RWaddress( arg1, "XPutBackEvent - arg1");
		validate_NULL_TYPETYPE(  arg1, "XPutBackEvent - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

