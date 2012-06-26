// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Intrinsic.h>
#undef XtAddExposureToRegion
static void(*funcptr) (XEvent * , Region ) = 0;

extern int __lsb_check_params;
void XtAddExposureToRegion (XEvent * arg0 , Region arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtAddExposureToRegion()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddExposureToRegion");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAddExposureToRegion. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAddExposureToRegion() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtAddExposureToRegion - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtAddExposureToRegion - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddExposureToRegion - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

