// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/extensions.h>
#undef xsltInitElemPreComp
static void(*funcptr) (xsltElemPreCompPtr , xsltStylesheetPtr , xmlNodePtr , xsltTransformFunction , xsltElemPreCompDeallocator ) = 0;

extern int __lsb_check_params;
void xsltInitElemPreComp (xsltElemPreCompPtr arg0 , xsltStylesheetPtr arg1 , xmlNodePtr arg2 , xsltTransformFunction arg3 , xsltElemPreCompDeallocator arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltInitElemPreComp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltInitElemPreComp", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltInitElemPreComp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltInitElemPreComp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltInitElemPreComp - arg0 (comp)");
		validate_NULL_TYPETYPE(  arg1, "xsltInitElemPreComp - arg1 (style)");
		validate_NULL_TYPETYPE(  arg2, "xsltInitElemPreComp - arg2 (inst)");
		validate_NULL_TYPETYPE(  arg3, "xsltInitElemPreComp - arg3 (function)");
		validate_NULL_TYPETYPE(  arg4, "xsltInitElemPreComp - arg4 (freeFunc)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}
