// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/Xresource.h>
#include <lsb/Intrinsic.h>
#undef XtOpenApplication
static Widget(*funcptr) (XtAppContext * , const char * , XrmOptionDescList , Cardinal , int * , String * , String * , WidgetClass , ArgList , Cardinal ) = 0;

extern int __lsb_check_params;
Widget XtOpenApplication (XtAppContext * arg0 , const char * arg1 , XrmOptionDescList arg2 , Cardinal arg3 , int * arg4 , String * arg5 , String * arg6 , WidgetClass arg7 , ArgList arg8 , Cardinal arg9 )
{
	int reset_flag = __lsb_check_params;
	Widget ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtOpenApplication()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtOpenApplication");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtOpenApplication. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtOpenApplication() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtOpenApplication - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtOpenApplication - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XtOpenApplication - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtOpenApplication - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtOpenApplication - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtOpenApplication - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XtOpenApplication - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XtOpenApplication - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XtOpenApplication - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XtOpenApplication - arg5");
		if( arg6 ) {
		validate_RWaddress( arg6, "XtOpenApplication - arg6");
		}
		validate_NULL_TYPETYPE(  arg6, "XtOpenApplication - arg6");
		validate_NULL_TYPETYPE(  arg7, "XtOpenApplication - arg7");
		validate_NULL_TYPETYPE(  arg8, "XtOpenApplication - arg8");
		validate_NULL_TYPETYPE(  arg9, "XtOpenApplication - arg9");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	__lsb_check_params = reset_flag;
	return ret_value;
}

