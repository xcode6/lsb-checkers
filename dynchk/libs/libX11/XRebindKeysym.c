// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XRebindKeysym
static int(*funcptr) (Display * , KeySym , KeySym * , int , const unsigned char * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int XRebindKeysym (Display * arg0 , KeySym arg1 , KeySym * arg2 , int arg3 , const unsigned char * arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRebindKeysym");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XRebindKeysym()");
	validate_Rdaddress( arg0, "XRebindKeysym - arg0");
		validate_NULL_TYPETYPE(  arg0, "XRebindKeysym - arg0");
		validate_NULL_TYPETYPE(  arg1, "XRebindKeysym - arg1");
	validate_Rdaddress( arg2, "XRebindKeysym - arg2");
		validate_NULL_TYPETYPE(  arg2, "XRebindKeysym - arg2");
		validate_NULL_TYPETYPE(  arg3, "XRebindKeysym - arg3");
	validate_Rdaddress( arg4, "XRebindKeysym - arg4");
		validate_NULL_TYPETYPE(  arg4, "XRebindKeysym - arg4");
		validate_NULL_TYPETYPE(  arg5, "XRebindKeysym - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

