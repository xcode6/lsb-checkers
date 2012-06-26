// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>
#undef xmlXPathCastNodeToString
static xmlChar *(*funcptr) (xmlNodePtr ) = 0;

extern int __lsb_check_params;
xmlChar * xmlXPathCastNodeToString (xmlNodePtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathCastNodeToString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathCastNodeToString", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathCastNodeToString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathCastNodeToString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathCastNodeToString - arg0 (node)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

