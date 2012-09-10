// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#include <stdarg.h>
#undef xmlTextWriterWriteVFormatElement
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWriteVFormatElement (xmlTextWriterPtr arg0 , const xmlChar * arg1 , const char * arg2 , va_list arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWriteVFormatElement()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWriteVFormatElement", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWriteVFormatElement. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWriteVFormatElement() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWriteVFormatElement - arg0 (writer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlTextWriterWriteVFormatElement - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWriteVFormatElement - arg1 (name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlTextWriterWriteVFormatElement - arg2 (format)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWriteVFormatElement - arg2 (format)");
		validate_NULL_TYPETYPE(  arg3, "xmlTextWriterWriteVFormatElement - arg3 (argptr)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

