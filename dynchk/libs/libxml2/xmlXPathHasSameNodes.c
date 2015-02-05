// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpathInternals.h>
#undef xmlXPathHasSameNodes
static int(*funcptr) (xmlNodeSetPtr , xmlNodeSetPtr ) = 0;

extern int __lsb_check_params;
int xmlXPathHasSameNodes (xmlNodeSetPtr arg0 , xmlNodeSetPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPathHasSameNodes()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPathHasSameNodes", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPathHasSameNodes. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPathHasSameNodes() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPathHasSameNodes - arg0 (nodes1)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPathHasSameNodes - arg1 (nodes2)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
