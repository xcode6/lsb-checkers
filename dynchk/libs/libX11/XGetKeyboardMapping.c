// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XGetKeyboardMapping
static KeySym *(*funcptr) (Display * , unsigned int , int , int * ) = 0;

extern int __lsb_check_params;
KeySym * XGetKeyboardMapping (Display * arg0 , unsigned int arg1 , int arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	KeySym * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XGetKeyboardMapping");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetKeyboardMapping()");
		validate_RWaddress( arg0, "XGetKeyboardMapping - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetKeyboardMapping - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetKeyboardMapping - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetKeyboardMapping - arg2");
		validate_RWaddress( arg3, "XGetKeyboardMapping - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetKeyboardMapping - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

