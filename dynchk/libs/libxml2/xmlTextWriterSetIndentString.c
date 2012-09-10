// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterSetIndentString
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterSetIndentString (xmlTextWriterPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterSetIndentString()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterSetIndentString", "LIBXML2_2.6.5");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterSetIndentString. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterSetIndentString() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterSetIndentString - arg0 (writer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlTextWriterSetIndentString - arg1 (str)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterSetIndentString - arg1 (str)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

