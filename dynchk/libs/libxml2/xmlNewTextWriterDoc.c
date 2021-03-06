// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#undef xmlNewTextWriterDoc
static xmlTextWriterPtr(*funcptr) (xmlDocPtr * , int ) = 0;

extern int __lsb_check_params;
xmlTextWriterPtr xmlNewTextWriterDoc (xmlDocPtr * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	xmlTextWriterPtr ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlNewTextWriterDoc()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlNewTextWriterDoc", "LIBXML2_2.6.3");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlNewTextWriterDoc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlNewTextWriterDoc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlNewTextWriterDoc - arg0 (doc)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlNewTextWriterDoc - arg0 (doc)");
		validate_NULL_TYPETYPE(  arg1, "xmlNewTextWriterDoc - arg1 (compression)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

