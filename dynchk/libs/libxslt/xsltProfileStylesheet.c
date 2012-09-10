// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <stdio.h>
#include <libxslt/transform.h>
#undef xsltProfileStylesheet
static xmlDocPtr(*funcptr) (xsltStylesheetPtr , xmlDocPtr , const char * * , FILE * ) = 0;

extern int __lsb_check_params;
xmlDocPtr xsltProfileStylesheet (xsltStylesheetPtr arg0 , xmlDocPtr arg1 , const char * * arg2 , FILE * arg3 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltProfileStylesheet()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltProfileStylesheet");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltProfileStylesheet. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltProfileStylesheet() - validating");
		validate_NULL_TYPETYPE(  arg0, "xsltProfileStylesheet - arg0 (style)");
		validate_NULL_TYPETYPE(  arg1, "xsltProfileStylesheet - arg1 (doc)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xsltProfileStylesheet - arg2 (params)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltProfileStylesheet - arg2 (params)");
		if( arg3 ) {
		validate_RWaddress( arg3, "xsltProfileStylesheet - arg3 (output)");
		}
		validate_NULL_TYPETYPE(  arg3, "xsltProfileStylesheet - arg3 (output)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

