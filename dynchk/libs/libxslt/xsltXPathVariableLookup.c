// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/variables.h>
#undef xsltXPathVariableLookup
static xmlXPathObjectPtr(*funcptr) (void * , const unsigned char * , const unsigned char * ) = 0;

extern int __lsb_check_params;
xmlXPathObjectPtr xsltXPathVariableLookup (void * arg0 , const unsigned char * arg1 , const unsigned char * arg2 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathObjectPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltXPathVariableLookup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltXPathVariableLookup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltXPathVariableLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltXPathVariableLookup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xsltXPathVariableLookup - arg0 (ctxt)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltXPathVariableLookup - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltXPathVariableLookup - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltXPathVariableLookup - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xsltXPathVariableLookup - arg2 (ns_uri)");
		}
		validate_NULL_TYPETYPE(  arg2, "xsltXPathVariableLookup - arg2 (ns_uri)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

