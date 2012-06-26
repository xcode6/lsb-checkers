// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemas.h>
#undef xmlSchemaParse
static xmlSchemaPtr(*funcptr) (xmlSchemaParserCtxtPtr ) = 0;

extern int __lsb_check_params;
xmlSchemaPtr xmlSchemaParse (xmlSchemaParserCtxtPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	xmlSchemaPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSchemaParse()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaParse", "LIBXML2_2.5.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaParse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaParse() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaParse - arg0 (ctxt)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

