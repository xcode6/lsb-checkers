// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#undef XCheckTypedEvent
static int(*funcptr) (Display * , int , XEvent * ) = 0;

extern int __lsb_check_params;
int XCheckTypedEvent (Display * arg0 , int arg1 , XEvent * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XCheckTypedEvent ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XCheckTypedEvent()");
		validate_RWaddress( arg0, "XCheckTypedEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCheckTypedEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCheckTypedEvent - arg1");
		validate_RWaddress( arg2, "XCheckTypedEvent - arg2");
		validate_NULL_TYPETYPE(  arg2, "XCheckTypedEvent - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

