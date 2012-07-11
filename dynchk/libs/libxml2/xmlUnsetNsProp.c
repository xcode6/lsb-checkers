// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlUnsetNsProp
static int(*funcptr) (xmlNodePtr , xmlNsPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlUnsetNsProp (xmlNodePtr arg0 , xmlNsPtr arg1 , const xmlChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlUnsetNsProp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlUnsetNsProp", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlUnsetNsProp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlUnsetNsProp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlUnsetNsProp - arg0 (node)");
		validate_NULL_TYPETYPE(  arg1, "xmlUnsetNsProp - arg1 (ns)");
		validate_Rdaddress( arg2, "xmlUnsetNsProp - arg2 (name)");
		validate_NULL_TYPETYPE(  arg2, "xmlUnsetNsProp - arg2 (name)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
