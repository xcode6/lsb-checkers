// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/parser.h>
#undef xmlSAXParseEntity
static xmlDocPtr(*funcptr) (xmlSAXHandlerPtr , const char * ) = 0;

extern int __lsb_check_params;
xmlDocPtr xmlSAXParseEntity (xmlSAXHandlerPtr arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlDocPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlSAXParseEntity()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAXParseEntity", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAXParseEntity. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAXParseEntity() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlSAXParseEntity - arg0 (sax)");
		validate_Rdaddress( arg1, "xmlSAXParseEntity - arg1 (filename)");
		validate_NULL_TYPETYPE(  arg1, "xmlSAXParseEntity - arg1 (filename)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

