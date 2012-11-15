// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/extensions.h>
#undef xsltExtModuleFunctionLookup
static xmlXPathFunction(*funcptr) (const unsigned char * , const unsigned char * ) = 0;

extern int __lsb_check_params;
xmlXPathFunction xsltExtModuleFunctionLookup (const unsigned char * arg0 , const unsigned char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlXPathFunction ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltExtModuleFunctionLookup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xsltExtModuleFunctionLookup", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltExtModuleFunctionLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltExtModuleFunctionLookup() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xsltExtModuleFunctionLookup - arg0 (name)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltExtModuleFunctionLookup - arg0 (name)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltExtModuleFunctionLookup - arg1 (URI)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltExtModuleFunctionLookup - arg1 (URI)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
