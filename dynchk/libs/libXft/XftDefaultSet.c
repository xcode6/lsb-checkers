// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <fontconfig/fontconfig.h>
#include <X11/Xft/Xft.h>
#undef XftDefaultSet
static int(*funcptr) (Display * , FcPattern * ) = 0;

extern int __lsb_check_params;
int XftDefaultSet (Display * arg0 , FcPattern * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftDefaultSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftDefaultSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftDefaultSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftDefaultSet() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftDefaultSet - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftDefaultSet - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftDefaultSet - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftDefaultSet - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
