// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlreader.h>
#undef xmlTextReaderConstXmlVersion
static const xmlChar *(*funcptr) (xmlTextReaderPtr ) = 0;

extern int __lsb_check_params;
const xmlChar * xmlTextReaderConstXmlVersion (xmlTextReaderPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	const xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextReaderConstXmlVersion()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextReaderConstXmlVersion", "LIBXML2_2.6.15");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextReaderConstXmlVersion. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextReaderConstXmlVersion() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextReaderConstXmlVersion - arg0 (reader)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

