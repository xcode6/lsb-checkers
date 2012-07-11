// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/entities.h>
#undef xmlEncodeSpecialChars
static xmlChar *(*funcptr) (xmlDocPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
xmlChar * xmlEncodeSpecialChars (xmlDocPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlEncodeSpecialChars()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlEncodeSpecialChars", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlEncodeSpecialChars. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlEncodeSpecialChars() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlEncodeSpecialChars - arg0 (doc)");
		validate_Rdaddress( arg1, "xmlEncodeSpecialChars - arg1 (input)");
		validate_NULL_TYPETYPE(  arg1, "xmlEncodeSpecialChars - arg1 (input)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
