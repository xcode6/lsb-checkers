// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#undef xmlXPathConvertString
static xmlXPathObjectPtr(*funcptr) (xmlXPathObjectPtr ) = 0;

extern int __lsb_check_params;
xmlXPathObjectPtr xmlXPathConvertString (xmlXPathObjectPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObjectPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathConvertString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathConvertString", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathConvertString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathConvertString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathConvertString - arg0 (val)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

