// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemas.h>
#include <libxml2/libxml/xmlerror.h>
#undef xmlSchemaSetValidStructuredErrors
static void(*funcptr) (xmlSchemaValidCtxtPtr , xmlStructuredErrorFunc , void * ) = 0;

extern int __lsb_check_params;
void xmlSchemaSetValidStructuredErrors (xmlSchemaValidCtxtPtr arg0 , xmlStructuredErrorFunc arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSchemaSetValidStructuredErrors()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaSetValidStructuredErrors", "LIBXML2_2.6.21");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaSetValidStructuredErrors. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaSetValidStructuredErrors() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaSetValidStructuredErrors - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlSchemaSetValidStructuredErrors - arg1 (serror)");
		validate_RWaddress( arg2, "xmlSchemaSetValidStructuredErrors - arg2 (ctx)");
		validate_NULL_TYPETYPE(  arg2, "xmlSchemaSetValidStructuredErrors - arg2 (ctx)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
