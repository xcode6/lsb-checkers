// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#undef XtCvtStringToCursor
static Boolean(*funcptr) (Display * , XrmValuePtr , Cardinal * , XrmValuePtr , XrmValuePtr , XtPointer * ) = 0;

extern int __lsb_check_params;
Boolean XtCvtStringToCursor (Display * arg0 , XrmValuePtr arg1 , Cardinal * arg2 , XrmValuePtr arg3 , XrmValuePtr arg4 , XtPointer * arg5 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtCvtStringToCursor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToCursor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtCvtStringToCursor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtCvtStringToCursor() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtCvtStringToCursor - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtCvtStringToCursor - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCvtStringToCursor - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtCvtStringToCursor - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtCvtStringToCursor - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtCvtStringToCursor - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtCvtStringToCursor - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XtCvtStringToCursor - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XtCvtStringToCursor - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

