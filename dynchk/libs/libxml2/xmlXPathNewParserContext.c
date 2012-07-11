// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathNewParserContext
static xmlXPathParserContextPtr(*funcptr) (const xmlChar * , xmlXPathContextPtr ) = 0;

extern int __lsb_check_params;
xmlXPathParserContextPtr xmlXPathNewParserContext (const xmlChar * arg0 , xmlXPathContextPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathParserContextPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathNewParserContext()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathNewParserContext", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathNewParserContext. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathNewParserContext() - validating");
		validate_Rdaddress( arg0, "xmlXPathNewParserContext - arg0 (str)");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathNewParserContext - arg0 (str)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPathNewParserContext - arg1 (ctxt)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
