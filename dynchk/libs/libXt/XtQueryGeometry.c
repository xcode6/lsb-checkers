// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtQueryGeometry
static XtGeometryResult(*funcptr) (Widget , XtWidgetGeometry * , XtWidgetGeometry * ) = 0;

extern int __lsb_check_params;
XtGeometryResult XtQueryGeometry (Widget arg0 , XtWidgetGeometry * arg1 , XtWidgetGeometry * arg2 )
{
	int reset_flag = __lsb_check_params;
	XtGeometryResult ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtQueryGeometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtQueryGeometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtQueryGeometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtQueryGeometry() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtQueryGeometry - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtQueryGeometry - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtQueryGeometry - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtQueryGeometry - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtQueryGeometry - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

