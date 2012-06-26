// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/XKBstr.h>
#include <X11/XKBlib.h>
#undef XkbSetIndicatorMap
static int(*funcptr) (Display * , unsigned long int , XkbDescPtr ) = 0;

extern int __lsb_check_params;
int XkbSetIndicatorMap (Display * arg0 , unsigned long int arg1 , XkbDescPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbSetIndicatorMap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetIndicatorMap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbSetIndicatorMap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbSetIndicatorMap() - validating");
		validate_RWaddress( arg0, "XkbSetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbSetIndicatorMap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbSetIndicatorMap - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbSetIndicatorMap - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

