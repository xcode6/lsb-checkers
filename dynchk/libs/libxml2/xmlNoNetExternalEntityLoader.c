// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#undef xmlNoNetExternalEntityLoader
static xmlParserInputPtr(*funcptr) (const char * , const char * , xmlParserCtxtPtr ) = 0;

extern int __lsb_check_params;
xmlParserInputPtr xmlNoNetExternalEntityLoader (const char * arg0 , const char * arg1 , xmlParserCtxtPtr arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlParserInputPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNoNetExternalEntityLoader()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNoNetExternalEntityLoader", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNoNetExternalEntityLoader. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNoNetExternalEntityLoader() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlNoNetExternalEntityLoader - arg0 (URL)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlNoNetExternalEntityLoader - arg0 (URL)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlNoNetExternalEntityLoader - arg1 (ID)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlNoNetExternalEntityLoader - arg1 (ID)");
		validate_NULL_TYPETYPE(  arg2, "xmlNoNetExternalEntityLoader - arg2 (ctxt)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

