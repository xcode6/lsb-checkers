// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathNextAncestor
static xmlNodePtr(*funcptr) (xmlXPathParserContextPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
xmlNodePtr xmlXPathNextAncestor (xmlXPathParserContextPtr arg0 , xmlNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathNextAncestor()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathNextAncestor", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathNextAncestor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathNextAncestor() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathNextAncestor - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPathNextAncestor - arg1 (cur)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

