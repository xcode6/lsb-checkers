// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxslt/xsltInternals.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltutils.h>
#undef xslAddCall
static int(*funcptr) (xsltTemplatePtr , xmlNode * ) = 0;

extern int __lsb_check_params;
int xslAddCall (xsltTemplatePtr arg0 , xmlNode * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xslAddCall()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xslAddCall", "LIBXML2_1.0.11");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xslAddCall. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xslAddCall() - validating");
		validate_NULL_TYPETYPE(  arg0, "xslAddCall - arg0 (templ)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xslAddCall - arg1 (source)");
		}
		validate_NULL_TYPETYPE(  arg1, "xslAddCall - arg1 (source)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
