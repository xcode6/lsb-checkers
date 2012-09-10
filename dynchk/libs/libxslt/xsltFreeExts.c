// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/extensions.h>
#undef xsltFreeExts
static void(*funcptr) (xsltStylesheetPtr ) = 0;

extern int __lsb_check_params;
void xsltFreeExts (xsltStylesheetPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltFreeExts()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltFreeExts");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFreeExts. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFreeExts() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFreeExts - arg0 (style)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

