// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/documents.h>
#undef xsltFindDocument
static xsltDocumentPtr(*funcptr) (xsltTransformContextPtr , xmlDocPtr ) = 0;

extern int __lsb_check_params;
xsltDocumentPtr xsltFindDocument (xsltTransformContextPtr arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	xsltDocumentPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltFindDocument()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltFindDocument");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltFindDocument. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltFindDocument() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltFindDocument - arg0 (ctxt)");
		validate_NULL_TYPETYPE(  arg1, "xsltFindDocument - arg1 (doc)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

