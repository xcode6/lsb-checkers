// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/IntrinsicP.h>
#undef XtIsComposite
static Boolean(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
Boolean XtIsComposite (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtIsComposite()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsComposite");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtIsComposite. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtIsComposite() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtIsComposite - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

