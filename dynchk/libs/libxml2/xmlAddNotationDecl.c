// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlAddNotationDecl
static xmlNotationPtr(*funcptr) (xmlValidCtxtPtr , xmlDtdPtr , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlNotationPtr xmlAddNotationDecl (xmlValidCtxtPtr arg0 , xmlDtdPtr arg1 , const xmlChar * arg2 , const xmlChar * arg3 , const xmlChar * arg4 )
{
	int reset_flag = __lsb_check_params;
	xmlNotationPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAddNotationDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAddNotationDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAddNotationDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAddNotationDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlAddNotationDecl - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlAddNotationDecl - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlAddNotationDecl - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlAddNotationDecl - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlAddNotationDecl - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlAddNotationDecl - arg3");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlAddNotationDecl - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlAddNotationDecl - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

