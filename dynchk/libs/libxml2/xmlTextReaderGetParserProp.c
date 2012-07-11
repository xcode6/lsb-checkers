// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlreader.h>
#undef xmlTextReaderGetParserProp
static int(*funcptr) (xmlTextReaderPtr , int ) = 0;

extern int __lsb_check_params;
int xmlTextReaderGetParserProp (xmlTextReaderPtr arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextReaderGetParserProp()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextReaderGetParserProp", "LIBXML2_2.5.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextReaderGetParserProp. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextReaderGetParserProp() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextReaderGetParserProp - arg0 (reader)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextReaderGetParserProp - arg1 (prop)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
