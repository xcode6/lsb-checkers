// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#undef XtScreenDatabase
static XrmDatabase(*funcptr) (Screen * ) = 0;

extern int __lsb_check_params;
XrmDatabase XtScreenDatabase (Screen * arg0 )
{
	int reset_flag = __lsb_check_params;
	XrmDatabase ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtScreenDatabase()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtScreenDatabase");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtScreenDatabase. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtScreenDatabase() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XtScreenDatabase - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtScreenDatabase - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

