// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/xmlreader.h>
#undef xmlNewTextReader
static xmlTextReaderPtr(*funcptr) (xmlParserInputBufferPtr , const char * ) = 0;

extern int __lsb_check_params;
xmlTextReaderPtr xmlNewTextReader (xmlParserInputBufferPtr arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlTextReaderPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewTextReader()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewTextReader", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewTextReader. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewTextReader() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlNewTextReader - arg0 (input)");
		validate_Rdaddress( arg1, "xmlNewTextReader - arg1 (URI)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewTextReader - arg1 (URI)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

