// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/parser.h>
#undef xmlCreateDocParserCtxt
static xmlParserCtxtPtr(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlParserCtxtPtr xmlCreateDocParserCtxt (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlParserCtxtPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlCreateDocParserCtxt()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlCreateDocParserCtxt", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlCreateDocParserCtxt. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlCreateDocParserCtxt() - validating");
		validate_Rdaddress( arg0, "xmlCreateDocParserCtxt - arg0 (cur)");
		validate_NULL_TYPETYPE(  arg0, "xmlCreateDocParserCtxt - arg0 (cur)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

