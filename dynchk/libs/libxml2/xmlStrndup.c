// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#undef xmlStrndup
static xmlChar *(*funcptr) (const xmlChar * , int ) = 0;

extern int __lsb_check_params;
xmlChar * xmlStrndup (const xmlChar * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStrndup()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStrndup", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStrndup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStrndup() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlStrndup - arg0 (cur)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlStrndup - arg0 (cur)");
		validate_NULL_TYPETYPE(  arg1, "xmlStrndup - arg1 (len)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

