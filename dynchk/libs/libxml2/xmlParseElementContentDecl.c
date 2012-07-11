// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseElementContentDecl
static int(*funcptr) (xmlParserCtxtPtr , const xmlChar * , xmlElementContentPtr * ) = 0;

extern int __lsb_check_params;
int xmlParseElementContentDecl (xmlParserCtxtPtr arg0 , const xmlChar * arg1 , xmlElementContentPtr * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseElementContentDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseElementContentDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseElementContentDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseElementContentDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseElementContentDecl - arg0 (ctxt)");
		validate_Rdaddress( arg1, "xmlParseElementContentDecl - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseElementContentDecl - arg1 (name)");
		validate_RWaddress( arg2, "xmlParseElementContentDecl - arg2 (result)");
		validate_NULL_TYPETYPE(  arg2, "xmlParseElementContentDecl - arg2 (result)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
