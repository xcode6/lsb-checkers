// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/SAX2.h>
#undef xmlSAXVersion
static int(*funcptr) (xmlSAXHandler * , int ) = 0;

extern int __lsb_check_params;
int xmlSAXVersion (xmlSAXHandler * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSAXVersion()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAXVersion", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAXVersion. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAXVersion() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlSAXVersion - arg0 (hdlr)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSAXVersion - arg0 (hdlr)");
		validate_NULL_TYPETYPE(  arg1, "xmlSAXVersion - arg1 (version)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
