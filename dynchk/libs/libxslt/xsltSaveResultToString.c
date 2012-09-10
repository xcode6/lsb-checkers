// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/xsltutils.h>
#undef xsltSaveResultToString
static int(*funcptr) (xmlChar * * , int * , xmlDocPtr , xsltStylesheetPtr ) = 0;

extern int __lsb_check_params;
int xsltSaveResultToString (xmlChar * * arg0 , int * arg1 , xmlDocPtr arg2 , xsltStylesheetPtr arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltSaveResultToString()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltSaveResultToString");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltSaveResultToString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltSaveResultToString() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xsltSaveResultToString - arg0 (doc_txt_ptr)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltSaveResultToString - arg0 (doc_txt_ptr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xsltSaveResultToString - arg1 (doc_txt_len)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltSaveResultToString - arg1 (doc_txt_len)");
		validate_NULL_TYPETYPE(  arg2, "xsltSaveResultToString - arg2 (result)");
		validate_NULL_TYPETYPE(  arg3, "xsltSaveResultToString - arg3 (style)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

