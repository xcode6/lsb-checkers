// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/numbersInternals.h>
#include <libxml2/libxml/tree.h>
#undef xsltNumberFormat
static void(*funcptr) (xsltTransformContextPtr , xsltNumberDataPtr , xmlNode * ) = 0;

extern int __lsb_check_params;
void xsltNumberFormat (xsltTransformContextPtr arg0 , xsltNumberDataPtr arg1 , xmlNode * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltNumberFormat()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltNumberFormat", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltNumberFormat. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltNumberFormat() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltNumberFormat - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltNumberFormat - arg1 (data)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltNumberFormat - arg2 (node)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltNumberFormat - arg2 (node)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
