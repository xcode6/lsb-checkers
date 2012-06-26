// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#undef XTestFakeMotionEvent
static int(*funcptr) (Display * , int , int , int , unsigned long int ) = 0;

extern int __lsb_check_params;
int XTestFakeMotionEvent (Display * arg0 , int arg1 , int arg2 , int arg3 , unsigned long int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XTestFakeMotionEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XTestFakeMotionEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XTestFakeMotionEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XTestFakeMotionEvent() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XTestFakeMotionEvent - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XTestFakeMotionEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XTestFakeMotionEvent - arg1");
		validate_NULL_TYPETYPE(  arg2, "XTestFakeMotionEvent - arg2");
		validate_NULL_TYPETYPE(  arg3, "XTestFakeMotionEvent - arg3");
		validate_NULL_TYPETYPE(  arg4, "XTestFakeMotionEvent - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

