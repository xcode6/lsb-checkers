// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#undef XGetModifierMapping
static XModifierKeymap *(*funcptr) (Display * ) = 0;

extern int __lsb_check_params;
XModifierKeymap * XGetModifierMapping (Display * arg0 )
{
	int reset_flag = __lsb_check_params;
	XModifierKeymap * ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XGetModifierMapping");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetModifierMapping()");
		validate_RWaddress( arg0, "XGetModifierMapping - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetModifierMapping - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

