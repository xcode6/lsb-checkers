// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <stdarg.h>
#undef xmlTextWriterWriteVFormatComment
static int(*funcptr) (xmlTextWriterPtr , const char * , va_list ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWriteVFormatComment (xmlTextWriterPtr arg0 , const char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWriteVFormatComment()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWriteVFormatComment", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWriteVFormatComment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWriteVFormatComment() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWriteVFormatComment - arg0 (writer)");
		validate_Rdaddress( arg1, "xmlTextWriterWriteVFormatComment - arg1 (format)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWriteVFormatComment - arg1 (format)");
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWriteVFormatComment - arg2 (argptr)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

