// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlSplitQName
static xmlChar *(*funcptr) (xmlParserCtxtPtr , const xmlChar * , xmlChar * * ) = 0;

extern int __lsb_check_params;
xmlChar * xmlSplitQName (xmlParserCtxtPtr arg0 , const xmlChar * arg1 , xmlChar * * arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSplitQName()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSplitQName", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSplitQName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSplitQName() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSplitQName - arg0 (ctxt)");
		validate_Rdaddress( arg1, "xmlSplitQName - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlSplitQName - arg1 (name)");
		validate_RWaddress( arg2, "xmlSplitQName - arg2 (prefix)");
		validate_NULL_TYPETYPE(  arg2, "xmlSplitQName - arg2 (prefix)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
