// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/extensions.h>
#undef xsltExtModuleTopLevelLookup
static xsltTopLevelFunction(*funcptr) (const unsigned char * , const unsigned char * ) = 0;

extern int __lsb_check_params;
xsltTopLevelFunction xsltExtModuleTopLevelLookup (const unsigned char * arg0 , const unsigned char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xsltTopLevelFunction ret_value  ;
	__lsb_output(4, "Invoking wrapper for xsltExtModuleTopLevelLookup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xsltExtModuleTopLevelLookup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xsltExtModuleTopLevelLookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xsltExtModuleTopLevelLookup() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xsltExtModuleTopLevelLookup - arg0 (name)");
		}
		validate_NULL_TYPETYPE(  arg0, "xsltExtModuleTopLevelLookup - arg0 (name)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xsltExtModuleTopLevelLookup - arg1 (URI)");
		}
		validate_NULL_TYPETYPE(  arg1, "xsltExtModuleTopLevelLookup - arg1 (URI)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

