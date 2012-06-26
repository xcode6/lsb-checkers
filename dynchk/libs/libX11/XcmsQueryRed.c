// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xcms.h>
#undef XcmsQueryRed
static int(*funcptr) (XcmsCCC , XcmsColorFormat , XcmsColor * ) = 0;

extern int __lsb_check_params;
int XcmsQueryRed (XcmsCCC arg0 , XcmsColorFormat arg1 , XcmsColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsQueryRed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsQueryRed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsQueryRed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsQueryRed() - validating");
		validate_NULL_TYPETYPE(  arg0, "XcmsQueryRed - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsQueryRed - arg1");
		validate_RWaddress( arg2, "XcmsQueryRed - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsQueryRed - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

