// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#undef xsltCompileAttr
static void(*funcptr) (xsltStylesheetPtr , xmlAttrPtr ) = 0;

extern int __lsb_check_params;
void xsltCompileAttr (xsltStylesheetPtr arg0 , xmlAttrPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltCompileAttr()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltCompileAttr");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltCompileAttr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltCompileAttr() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltCompileAttr - arg0 (style)");
		validate_NULL_TYPETYPE(  arg1, "xsltCompileAttr - arg1 (attr)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

