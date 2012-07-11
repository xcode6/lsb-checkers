// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/globals.h>
#undef xmlDeregisterNodeDefault
static xmlDeregisterNodeFunc(*funcptr) (xmlDeregisterNodeFunc ) = 0;

extern int __lsb_check_params;
xmlDeregisterNodeFunc xmlDeregisterNodeDefault (xmlDeregisterNodeFunc arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlDeregisterNodeFunc ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlDeregisterNodeDefault()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDeregisterNodeDefault", "LIBXML2_2.5.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDeregisterNodeDefault. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDeregisterNodeDefault() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlDeregisterNodeDefault - arg0 (func)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
