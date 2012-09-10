// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/attributes.h>
#undef xsltResolveStylesheetAttributeSet
static void(*funcptr) (xsltStylesheetPtr ) = 0;

extern int __lsb_check_params;
void xsltResolveStylesheetAttributeSet (xsltStylesheetPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltResolveStylesheetAttributeSet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltResolveStylesheetAttributeSet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltResolveStylesheetAttributeSet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltResolveStylesheetAttributeSet() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltResolveStylesheetAttributeSet - arg0 (style)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

