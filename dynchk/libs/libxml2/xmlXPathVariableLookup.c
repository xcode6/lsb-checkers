// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathVariableLookup
static xmlXPathObjectPtr(*funcptr) (xmlXPathContextPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlXPathObjectPtr xmlXPathVariableLookup (xmlXPathContextPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObjectPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathVariableLookup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathVariableLookup", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathVariableLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathVariableLookup() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathVariableLookup - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlXPathVariableLookup - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlXPathVariableLookup - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

