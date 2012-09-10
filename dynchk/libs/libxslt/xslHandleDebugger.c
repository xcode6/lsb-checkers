// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>
#undef xslHandleDebugger
static void(*funcptr) (xmlNodePtr , xmlNodePtr , xsltTemplatePtr , xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
void xslHandleDebugger (xmlNodePtr arg0 , xmlNodePtr arg1 , xsltTemplatePtr arg2 , xsltTransformContextPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xslHandleDebugger()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xslHandleDebugger");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xslHandleDebugger. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xslHandleDebugger() - validating");
		validate_NULL_TYPETYPE(  arg0, "xslHandleDebugger - arg0 (cur)");
		validate_NULL_TYPETYPE(  arg1, "xslHandleDebugger - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xslHandleDebugger - arg2 (templ)");
		validate_NULL_TYPETYPE(  arg3, "xslHandleDebugger - arg3 (ctxt)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

