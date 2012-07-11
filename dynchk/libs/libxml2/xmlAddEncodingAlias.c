// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/encoding.h>
#undef xmlAddEncodingAlias
static int(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
int xmlAddEncodingAlias (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlAddEncodingAlias()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlAddEncodingAlias", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlAddEncodingAlias. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlAddEncodingAlias() - validating");
		validate_Rdaddress( arg0, "xmlAddEncodingAlias - arg0 (name)");
		validate_NULL_TYPETYPE(  arg0, "xmlAddEncodingAlias - arg0 (name)");
		validate_Rdaddress( arg1, "xmlAddEncodingAlias - arg1 (alias)");
		validate_NULL_TYPETYPE(  arg1, "xmlAddEncodingAlias - arg1 (alias)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
