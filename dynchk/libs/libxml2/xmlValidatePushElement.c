// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlValidatePushElement
static int(*funcptr) (xmlValidCtxtPtr , xmlDocPtr , xmlNodePtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlValidatePushElement (xmlValidCtxtPtr arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 , const xmlChar * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidatePushElement()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidatePushElement", "LIBXML2_2.5.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidatePushElement. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidatePushElement() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlValidatePushElement - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlValidatePushElement - arg1");
		validate_NULL_TYPETYPE(  arg2, "xmlValidatePushElement - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlValidatePushElement - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlValidatePushElement - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
