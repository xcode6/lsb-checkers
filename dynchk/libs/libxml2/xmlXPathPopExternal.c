// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathPopExternal
static void *(*funcptr) (xmlXPathParserContextPtr ) = 0;

extern int __lsb_check_params;
void * xmlXPathPopExternal (xmlXPathParserContextPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathPopExternal()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathPopExternal", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathPopExternal. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathPopExternal() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathPopExternal - arg0 (ctxt)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

