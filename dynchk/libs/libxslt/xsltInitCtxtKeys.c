// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/keys.h>
#undef xsltInitCtxtKeys
static void(*funcptr) (xsltTransformContextPtr , xsltDocumentPtr ) = 0;

extern int __lsb_check_params;
void xsltInitCtxtKeys (xsltTransformContextPtr arg0 , xsltDocumentPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xsltInitCtxtKeys()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltInitCtxtKeys");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltInitCtxtKeys. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltInitCtxtKeys() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltInitCtxtKeys - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltInitCtxtKeys - arg1 (doc)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

