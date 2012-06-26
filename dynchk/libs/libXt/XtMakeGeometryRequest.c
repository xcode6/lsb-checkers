// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtMakeGeometryRequest
static XtGeometryResult(*funcptr) (Widget , XtWidgetGeometry * , XtWidgetGeometry * ) = 0;

extern int __lsb_check_params;
XtGeometryResult XtMakeGeometryRequest (Widget arg0 , XtWidgetGeometry * arg1 , XtWidgetGeometry * arg2 )
{
	int reset_flag = __lsb_check_params;
	XtGeometryResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtMakeGeometryRequest()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMakeGeometryRequest");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtMakeGeometryRequest. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtMakeGeometryRequest() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtMakeGeometryRequest - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtMakeGeometryRequest - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtMakeGeometryRequest - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtMakeGeometryRequest - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtMakeGeometryRequest - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

