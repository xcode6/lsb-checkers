// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#undef XtGetActionKeysym
static KeySym(*funcptr) (XEvent * , Modifiers * ) = 0;

extern int __lsb_check_params;
KeySym XtGetActionKeysym (XEvent * arg0 , Modifiers * arg1 )
{
	int reset_flag = __lsb_check_params;
	KeySym ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtGetActionKeysym ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtGetActionKeysym()");
		validate_RWaddress( arg0, "XtGetActionKeysym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtGetActionKeysym - arg0");
		validate_RWaddress( arg1, "XtGetActionKeysym - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetActionKeysym - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

