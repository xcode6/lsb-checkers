// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/Xresource.h>
#undef XtGetClassExtension
static XtPointer(*funcptr) (WidgetClass , Cardinal , XrmQuark , long int , Cardinal ) = 0;

extern int __lsb_check_params;
XtPointer XtGetClassExtension (WidgetClass arg0 , Cardinal arg1 , XrmQuark arg2 , long int arg3 , Cardinal arg4 )
{
	int reset_flag = __lsb_check_params;
	XtPointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtGetClassExtension()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetClassExtension");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGetClassExtension. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGetClassExtension() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGetClassExtension - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGetClassExtension - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGetClassExtension - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGetClassExtension - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGetClassExtension - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

