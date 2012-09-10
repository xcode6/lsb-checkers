// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltutils.h>
#undef xsltMessage
static void(*funcptr) (xsltTransformContextPtr , xmlNodePtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
void xsltMessage (xsltTransformContextPtr arg0 , xmlNodePtr arg1 , xmlNodePtr arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltMessage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltMessage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltMessage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltMessage() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltMessage - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltMessage - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xsltMessage - arg2 (inst)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

