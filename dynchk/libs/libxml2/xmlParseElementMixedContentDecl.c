// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseElementMixedContentDecl
static xmlElementContentPtr(*funcptr) (xmlParserCtxtPtr , int ) = 0;

extern int __lsb_check_params;
xmlElementContentPtr xmlParseElementMixedContentDecl (xmlParserCtxtPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlElementContentPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseElementMixedContentDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseElementMixedContentDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseElementMixedContentDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseElementMixedContentDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseElementMixedContentDecl - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseElementMixedContentDecl - arg1 (inputchk)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
