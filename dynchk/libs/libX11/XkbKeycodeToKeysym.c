// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbKeycodeToKeysym
static KeySym(*funcptr) (Display * , unsigned int , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
KeySym XkbKeycodeToKeysym (Display * arg0 , unsigned int arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	KeySym ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbKeycodeToKeysym");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XkbKeycodeToKeysym()");
	validate_Rdaddress( arg0, "XkbKeycodeToKeysym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbKeycodeToKeysym - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbKeycodeToKeysym - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbKeycodeToKeysym - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbKeycodeToKeysym - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

