// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>
#include <libxml2/libxml/xpointer.h>
#undef xmlXPtrNewRangeNodePoint
static xmlXPathObjectPtr(*funcptr) (xmlNodePtr , xmlXPathObjectPtr ) = 0;

extern int __lsb_check_params;
xmlXPathObjectPtr xmlXPtrNewRangeNodePoint (xmlNodePtr arg0 , xmlXPathObjectPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObjectPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlXPtrNewRangeNodePoint()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlXPtrNewRangeNodePoint", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlXPtrNewRangeNodePoint. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlXPtrNewRangeNodePoint() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlXPtrNewRangeNodePoint - arg0 (start)");
		validate_NULL_TYPETYPE(  arg1, "xmlXPtrNewRangeNodePoint - arg1 (end)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

