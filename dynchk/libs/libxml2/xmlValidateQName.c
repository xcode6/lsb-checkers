// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#undef xmlValidateQName
static int(*funcptr) (const xmlChar * , int ) = 0;

extern int __lsb_check_params;
int xmlValidateQName (const xmlChar * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidateQName()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidateQName", "LIBXML2_2.5.4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidateQName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidateQName() - validating");
		validate_Rdaddress( arg0, "xmlValidateQName - arg0 (value)");
		validate_NULL_TYPETYPE(  arg0, "xmlValidateQName - arg0 (value)");
		validate_NULL_TYPETYPE(  arg1, "xmlValidateQName - arg1 (space)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

