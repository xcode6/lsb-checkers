// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#undef XtCvtStringToShort
static Boolean(*funcptr) (Display * , XrmValuePtr , Cardinal * , XrmValuePtr , XrmValuePtr , XtPointer * ) = 0;

extern int __lsb_check_params;
Boolean XtCvtStringToShort (Display * arg0 , XrmValuePtr arg1 , Cardinal * arg2 , XrmValuePtr arg3 , XrmValuePtr arg4 , XtPointer * arg5 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtCvtStringToShort()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToShort");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtCvtStringToShort. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtCvtStringToShort() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtCvtStringToShort - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtCvtStringToShort - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCvtStringToShort - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtCvtStringToShort - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtCvtStringToShort - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtCvtStringToShort - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtCvtStringToShort - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XtCvtStringToShort - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XtCvtStringToShort - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

