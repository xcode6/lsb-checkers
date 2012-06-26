// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlNewDocText
static xmlNodePtr(*funcptr) (xmlDocPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlNodePtr xmlNewDocText (xmlDocPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewDocText()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewDocText", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewDocText. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewDocText() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewDocText - arg0 (doc)");
		validate_Rdaddress( arg1, "xmlNewDocText - arg1 (content)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewDocText - arg1 (content)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

