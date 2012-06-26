// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xcms.h>
#undef XcmsFormatOfPrefix
static XcmsColorFormat(*funcptr) (char * ) = 0;

extern int __lsb_check_params;
XcmsColorFormat XcmsFormatOfPrefix (char * arg0 )
{
	int reset_flag = __lsb_check_params;
	XcmsColorFormat ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsFormatOfPrefix()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsFormatOfPrefix");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsFormatOfPrefix. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsFormatOfPrefix() - validating");
		validate_RWaddress( arg0, "XcmsFormatOfPrefix - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsFormatOfPrefix - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

