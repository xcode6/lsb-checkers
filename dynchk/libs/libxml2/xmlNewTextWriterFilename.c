// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#undef xmlNewTextWriterFilename
static xmlTextWriterPtr(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
xmlTextWriterPtr xmlNewTextWriterFilename (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlTextWriterPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewTextWriterFilename()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewTextWriterFilename", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewTextWriterFilename. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewTextWriterFilename() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "xmlNewTextWriterFilename - arg0 (uri)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlNewTextWriterFilename - arg0 (uri)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewTextWriterFilename - arg1 (compression)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

