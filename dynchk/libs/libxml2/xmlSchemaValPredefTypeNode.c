// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemastypes.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#undef xmlSchemaValPredefTypeNode
static int(*funcptr) (xmlSchemaTypePtr , const xmlChar * , xmlSchemaValPtr * , xmlNodePtr ) = 0;

extern int __lsb_check_params;
int xmlSchemaValPredefTypeNode (xmlSchemaTypePtr arg0 , const xmlChar * arg1 , xmlSchemaValPtr * arg2 , xmlNodePtr arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSchemaValPredefTypeNode()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaValPredefTypeNode", "LIBXML2_2.5.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaValPredefTypeNode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaValPredefTypeNode() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaValPredefTypeNode - arg0 (type)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSchemaValPredefTypeNode - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSchemaValPredefTypeNode - arg1 (value)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlSchemaValPredefTypeNode - arg2 (val)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlSchemaValPredefTypeNode - arg2 (val)");
		validate_NULL_TYPETYPE(  arg3, "xmlSchemaValPredefTypeNode - arg3 (node)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

