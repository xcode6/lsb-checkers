// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlSwitchToEncoding
static int(*funcptr) (xmlParserCtxtPtr , xmlCharEncodingHandlerPtr ) = 0;

extern int __lsb_check_params;
int xmlSwitchToEncoding (xmlParserCtxtPtr arg0 , xmlCharEncodingHandlerPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSwitchToEncoding()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSwitchToEncoding", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSwitchToEncoding. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSwitchToEncoding() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSwitchToEncoding - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xmlSwitchToEncoding - arg1 (handler)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
