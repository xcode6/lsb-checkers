// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtWindowOfObject
static Window(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
Window XtWindowOfObject (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	Window ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtWindowOfObject()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtWindowOfObject");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtWindowOfObject. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtWindowOfObject() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtWindowOfObject - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

