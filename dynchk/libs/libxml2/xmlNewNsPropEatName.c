// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlNewNsPropEatName
static xmlAttrPtr(*funcptr) (xmlNodePtr , xmlNsPtr , xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlAttrPtr xmlNewNsPropEatName (xmlNodePtr arg0 , xmlNsPtr arg1 , xmlChar * arg2 , const xmlChar * arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlAttrPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewNsPropEatName()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewNsPropEatName", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewNsPropEatName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewNsPropEatName() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewNsPropEatName - arg0 (node)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewNsPropEatName - arg1 (ns)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlNewNsPropEatName - arg2 (name)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlNewNsPropEatName - arg2 (name)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlNewNsPropEatName - arg3 (value)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlNewNsPropEatName - arg3 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

