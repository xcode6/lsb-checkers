// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlParseElementChildrenContentDecl
static xmlElementContentPtr(*funcptr) (xmlParserCtxtPtr , int ) = 0;

extern int __lsb_check_params;
xmlElementContentPtr xmlParseElementChildrenContentDecl (xmlParserCtxtPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlElementContentPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseElementChildrenContentDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseElementChildrenContentDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseElementChildrenContentDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseElementChildrenContentDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseElementChildrenContentDecl - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseElementChildrenContentDecl - arg1 (inputchk)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
