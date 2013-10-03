// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xresource.h>
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtInitialize
static Widget(*funcptr) (const char * , const char * , XrmOptionDescRec * , Cardinal , int * , char * * ) = 0;

extern int __lsb_check_params;
Widget XtInitialize (const char * arg0 , const char * arg1 , XrmOptionDescRec * arg2 , Cardinal arg3 , int * arg4 , char * * arg5 )
{
	int reset_flag = __lsb_check_params;
	Widget ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtInitialize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtInitialize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtInitialize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtInitialize() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "XtInitialize - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtInitialize - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XtInitialize - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtInitialize - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtInitialize - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtInitialize - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtInitialize - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XtInitialize - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XtInitialize - arg4");
		if( arg5 ) {
		validate_RWaddress( arg5, "XtInitialize - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "XtInitialize - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

