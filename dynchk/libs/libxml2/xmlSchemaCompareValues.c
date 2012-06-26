// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlschemastypes.h>
#undef xmlSchemaCompareValues
static int(*funcptr) (xmlSchemaValPtr , xmlSchemaValPtr ) = 0;

extern int __lsb_check_params;
int xmlSchemaCompareValues (xmlSchemaValPtr arg0 , xmlSchemaValPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSchemaCompareValues()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSchemaCompareValues", "LIBXML2_2.5.8");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSchemaCompareValues. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSchemaCompareValues() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSchemaCompareValues - arg0 (x)");
		validate_NULL_TYPETYPE(  arg1, "xmlSchemaCompareValues - arg1 (y)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

