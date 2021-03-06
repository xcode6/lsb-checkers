// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxslt/documents.h>
#undef xsltLoadStyleDocument
static xsltDocumentPtr(*funcptr) (xsltStylesheetPtr , const unsigned char * ) = 0;

extern int __lsb_check_params;
xsltDocumentPtr xsltLoadStyleDocument (xsltStylesheetPtr arg0 , const unsigned char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xsltDocumentPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltLoadStyleDocument()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltLoadStyleDocument", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltLoadStyleDocument. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltLoadStyleDocument() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltLoadStyleDocument - arg0 (style)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltLoadStyleDocument - arg1 (URI)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltLoadStyleDocument - arg1 (URI)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

