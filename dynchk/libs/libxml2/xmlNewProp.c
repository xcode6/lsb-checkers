// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlNewProp
static xmlAttrPtr(*funcptr) (xmlNodePtr , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlAttrPtr xmlNewProp (xmlNodePtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlAttrPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewProp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewProp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewProp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewProp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewProp - arg0 (node)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlNewProp - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlNewProp - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlNewProp - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlNewProp - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

