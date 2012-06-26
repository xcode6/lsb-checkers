// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtParseAcceleratorTable
static XtAccelerators(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
XtAccelerators XtParseAcceleratorTable (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	XtAccelerators ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtParseAcceleratorTable()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtParseAcceleratorTable");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtParseAcceleratorTable. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtParseAcceleratorTable() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "XtParseAcceleratorTable - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XtParseAcceleratorTable - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

