// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseDefaultDecl
static int(*funcptr) (xmlParserCtxtPtr , xmlChar * * ) = 0;

extern int __lsb_check_params;
int xmlParseDefaultDecl (xmlParserCtxtPtr arg0 , xmlChar * * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseDefaultDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseDefaultDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseDefaultDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseDefaultDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseDefaultDecl - arg0 (ctxt)");
		validate_RWaddress( arg1, "xmlParseDefaultDecl - arg1 (value)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseDefaultDecl - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

