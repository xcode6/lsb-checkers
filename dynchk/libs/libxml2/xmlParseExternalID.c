// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseExternalID
static xmlChar *(*funcptr) (xmlParserCtxtPtr , xmlChar * * , int ) = 0;

extern int __lsb_check_params;
xmlChar * xmlParseExternalID (xmlParserCtxtPtr arg0 , xmlChar * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseExternalID()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseExternalID", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseExternalID. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseExternalID() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseExternalID - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlParseExternalID - arg1 (publicID)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlParseExternalID - arg1 (publicID)");
		validate_NULL_TYPETYPE(  arg2, "xmlParseExternalID - arg2 (strict)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

