// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlNewReference
static xmlNodePtr(*funcptr) (xmlDocPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlNodePtr xmlNewReference (xmlDocPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlNodePtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewReference()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewReference", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewReference. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewReference() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewReference - arg0 (doc)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlNewReference - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlNewReference - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

