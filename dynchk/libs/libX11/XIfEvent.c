// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XIfEvent
static int(*funcptr) (Display * , XEvent * , int(* )(Display *, XEvent *, XPointer), XPointer ) = 0;

extern int __lsb_check_params;
int XIfEvent (Display * arg0 , XEvent * arg1 , int(* arg2 )(Display *, XEvent *, XPointer), XPointer arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XIfEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XIfEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XIfEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XIfEvent() - validating");
		validate_RWaddress( arg0, "XIfEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XIfEvent - arg0");
		validate_RWaddress( arg1, "XIfEvent - arg1");
		validate_NULL_TYPETYPE(  arg1, "XIfEvent - arg1");
		validate_Rdaddress( arg2, "XIfEvent - arg2");
		validate_NULL_TYPETYPE(  arg2, "XIfEvent - arg2");
		validate_NULL_TYPETYPE(  arg3, "XIfEvent - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

