// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/shape.h>
#undef XShapeInputSelected
static unsigned long int(*funcptr) (Display * , Window ) = 0;

extern int __lsb_check_params;
unsigned long int XShapeInputSelected (Display * arg0 , Window arg1 )
{
	int reset_flag = __lsb_check_params;
	unsigned long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XShapeInputSelected()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeInputSelected");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XShapeInputSelected. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XShapeInputSelected() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XShapeInputSelected - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XShapeInputSelected - arg0");
		validate_NULL_TYPETYPE(  arg1, "XShapeInputSelected - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

