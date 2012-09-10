// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlXPathCtxtCompile
static xmlXPathCompExprPtr(*funcptr) (xmlXPathContextPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlXPathCompExprPtr xmlXPathCtxtCompile (xmlXPathContextPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathCompExprPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathCtxtCompile()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathCtxtCompile", "LIBXML2_2.6.5");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathCtxtCompile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathCtxtCompile() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathCtxtCompile - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlXPathCtxtCompile - arg1 (str)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlXPathCtxtCompile - arg1 (str)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

