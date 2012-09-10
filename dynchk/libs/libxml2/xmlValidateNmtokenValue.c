// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/valid.h>
#undef xmlValidateNmtokenValue
static int(*funcptr) (const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlValidateNmtokenValue (const xmlChar * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidateNmtokenValue()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidateNmtokenValue", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidateNmtokenValue. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidateNmtokenValue() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlValidateNmtokenValue - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlValidateNmtokenValue - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

