// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlGetNoNsProp
static xmlChar *(*funcptr) (xmlNodePtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlChar * xmlGetNoNsProp (xmlNodePtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlGetNoNsProp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlGetNoNsProp", "LIBXML2_2.5.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlGetNoNsProp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlGetNoNsProp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlGetNoNsProp - arg0 (node)");
		validate_Rdaddress( arg1, "xmlGetNoNsProp - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlGetNoNsProp - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

