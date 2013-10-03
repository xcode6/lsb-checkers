// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#undef XtConvert
static void(*funcptr) (Widget , const char * , XrmValue * , const char * , XrmValue * ) = 0;

extern int __lsb_check_params;
void XtConvert (Widget arg0 , const char * arg1 , XrmValue * arg2 , const char * arg3 , XrmValue * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtConvert()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConvert");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtConvert. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtConvert() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtConvert - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XtConvert - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtConvert - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtConvert - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtConvert - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XtConvert - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XtConvert - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XtConvert - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XtConvert - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

