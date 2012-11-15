// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parser.h>
#include <stdio.h>
#include <libxslt/transform.h>
#undef xsltRunStylesheetUser
static int(*funcptr) (xsltStylesheetPtr , xmlDocPtr , const char * * , const char * , xmlSAXHandlerPtr , xmlOutputBufferPtr , FILE * , xsltTransformContextPtr ) = 0;

extern int __lsb_check_params;
int xsltRunStylesheetUser (xsltStylesheetPtr arg0 , xmlDocPtr arg1 , const char * * arg2 , const char * arg3 , xmlSAXHandlerPtr arg4 , xmlOutputBufferPtr arg5 , FILE * arg6 , xsltTransformContextPtr arg7 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltRunStylesheetUser()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltRunStylesheetUser", "LIBXML2_1.0.17");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltRunStylesheetUser. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltRunStylesheetUser() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltRunStylesheetUser - arg0 (style)");
		validate_NULL_TYPETYPE(  arg1, "xsltRunStylesheetUser - arg1 (doc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltRunStylesheetUser - arg2 (params)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltRunStylesheetUser - arg2 (params)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xsltRunStylesheetUser - arg3 (output)");
		}
		validate_NULL_TYPETYPE(  arg3, "xsltRunStylesheetUser - arg3 (output)");
		validate_NULL_TYPETYPE(  arg4, "xsltRunStylesheetUser - arg4 (SAX)");
		validate_NULL_TYPETYPE(  arg5, "xsltRunStylesheetUser - arg5 (IObuf)");
		if( arg6 ) {
		validate_RWaddress( arg6, "xsltRunStylesheetUser - arg6 (profile)");
		}
		validate_NULL_TYPETYPE(  arg6, "xsltRunStylesheetUser - arg6 (profile)");
		validate_NULL_TYPETYPE(  arg7, "xsltRunStylesheetUser - arg7 (userCtxt)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}
