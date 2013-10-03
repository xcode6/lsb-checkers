// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtGetValues
static void(*funcptr) (Widget , ArgList , Cardinal ) = 0;

extern int __lsb_check_params;
void XtGetValues (Widget arg0 , ArgList arg1 , Cardinal arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtGetValues()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetValues");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGetValues. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGetValues() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGetValues - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGetValues - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGetValues - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

