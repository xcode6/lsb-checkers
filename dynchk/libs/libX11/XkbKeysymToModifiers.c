// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbKeysymToModifiers
static unsigned int(*funcptr) (Display * , KeySym ) = 0;

extern int __lsb_check_params;
unsigned int XkbKeysymToModifiers (Display * arg0 , KeySym arg1 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XkbKeysymToModifiers ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XkbKeysymToModifiers()");
		validate_RWaddress( arg0, "XkbKeysymToModifiers - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbKeysymToModifiers - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbKeysymToModifiers - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

