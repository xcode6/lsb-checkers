// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XMaskEvent
static int(*funcptr) (Display * , long int , XEvent * ) = 0;

extern int __lsb_check_params;
int XMaskEvent (Display * arg0 , long int arg1 , XEvent * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XMaskEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XMaskEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XMaskEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XMaskEvent() - validating");
		validate_RWaddress( arg0, "XMaskEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XMaskEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XMaskEvent - arg1");
		validate_RWaddress( arg2, "XMaskEvent - arg2");
		validate_NULL_TYPETYPE(  arg2, "XMaskEvent - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

