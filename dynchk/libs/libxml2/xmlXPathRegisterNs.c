// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathRegisterNs
static int(*funcptr) (xmlXPathContextPtr , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlXPathRegisterNs (xmlXPathContextPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathRegisterNs()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathRegisterNs", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathRegisterNs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathRegisterNs() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathRegisterNs - arg0 (ctxt)");
		validate_Rdaddress( arg1, "xmlXPathRegisterNs - arg1 (prefix)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPathRegisterNs - arg1 (prefix)");
		validate_Rdaddress( arg2, "xmlXPathRegisterNs - arg2 (ns_uri)");
		validate_NULL_TYPETYPE(  arg2, "xmlXPathRegisterNs - arg2 (ns_uri)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

