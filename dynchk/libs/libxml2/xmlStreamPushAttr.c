// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/pattern.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlStreamPushAttr
static int(*funcptr) (xmlStreamCtxtPtr , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlStreamPushAttr (xmlStreamCtxtPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStreamPushAttr()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStreamPushAttr", "LIBXML2_2.6.18");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStreamPushAttr. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStreamPushAttr() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlStreamPushAttr - arg0 (stream)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlStreamPushAttr - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlStreamPushAttr - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlStreamPushAttr - arg2 (ns)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlStreamPushAttr - arg2 (ns)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

