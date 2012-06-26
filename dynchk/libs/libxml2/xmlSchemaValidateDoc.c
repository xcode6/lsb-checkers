// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemas.h>
#include <libxml2/libxml/tree.h>
#undef xmlSchemaValidateDoc
static int(*funcptr) (xmlSchemaValidCtxtPtr , xmlDocPtr ) = 0;

extern int __lsb_check_params;
int xmlSchemaValidateDoc (xmlSchemaValidCtxtPtr arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSchemaValidateDoc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaValidateDoc", "LIBXML2_2.5.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaValidateDoc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaValidateDoc() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaValidateDoc - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlSchemaValidateDoc - arg1 (instance)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

