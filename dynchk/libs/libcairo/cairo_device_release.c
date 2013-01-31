// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_device_release
static void(*funcptr) (cairo_device_t * ) = 0;

extern int __lsb_check_params;
void cairo_device_release (cairo_device_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_device_release()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_device_release");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_device_release. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_device_release() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_device_release - arg0 (device)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_device_release - arg0 (device)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
