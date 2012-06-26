// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathNewFloat
static xmlXPathObjectPtr(*funcptr) (double ) = 0;

extern int __lsb_check_params;
xmlXPathObjectPtr xmlXPathNewFloat (double arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObjectPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathNewFloat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathNewFloat", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathNewFloat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathNewFloat() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathNewFloat - arg0 (val)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

