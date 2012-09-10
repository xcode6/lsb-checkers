// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/variables.h>
#undef xsltParseStylesheetCallerParam
static xsltStackElemPtr(*funcptr) (xsltTransformContextPtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
xsltStackElemPtr xsltParseStylesheetCallerParam (xsltTransformContextPtr arg0 , xmlNodePtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xsltStackElemPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltParseStylesheetCallerParam()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltParseStylesheetCallerParam");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltParseStylesheetCallerParam. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltParseStylesheetCallerParam() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltParseStylesheetCallerParam - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltParseStylesheetCallerParam - arg1 (cur)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

