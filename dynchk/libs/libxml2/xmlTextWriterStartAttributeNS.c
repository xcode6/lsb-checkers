// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterStartAttributeNS
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterStartAttributeNS (xmlTextWriterPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterStartAttributeNS()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterStartAttributeNS", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterStartAttributeNS. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterStartAttributeNS() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterStartAttributeNS - arg0 (writer)");
		validate_Rdaddress( arg1, "xmlTextWriterStartAttributeNS - arg1 (prefix)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterStartAttributeNS - arg1 (prefix)");
		validate_Rdaddress( arg2, "xmlTextWriterStartAttributeNS - arg2 (name)");
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterStartAttributeNS - arg2 (name)");
		validate_Rdaddress( arg3, "xmlTextWriterStartAttributeNS - arg3 (namespaceURI)");
		validate_NULL_TYPETYPE(  arg3, "xmlTextWriterStartAttributeNS - arg3 (namespaceURI)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
