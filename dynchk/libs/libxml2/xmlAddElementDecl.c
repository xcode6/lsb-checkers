// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlAddElementDecl
static xmlElementPtr(*funcptr) (xmlValidCtxtPtr , xmlDtdPtr , const xmlChar * , xmlElementTypeVal , xmlElementContentPtr ) = 0;

extern int __lsb_check_params;
xmlElementPtr xmlAddElementDecl (xmlValidCtxtPtr arg0 , xmlDtdPtr arg1 , const xmlChar * arg2 , xmlElementTypeVal arg3 , xmlElementContentPtr arg4 )
{
	int reset_flag = __lsb_check_params;
	xmlElementPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAddElementDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAddElementDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAddElementDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAddElementDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlAddElementDecl - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlAddElementDecl - arg1");
		validate_Rdaddress( arg2, "xmlAddElementDecl - arg2");
		validate_NULL_TYPETYPE(  arg2, "xmlAddElementDecl - arg2");
		validate_NULL_TYPETYPE(  arg3, "xmlAddElementDecl - arg3");
		validate_NULL_TYPETYPE(  arg4, "xmlAddElementDecl - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

