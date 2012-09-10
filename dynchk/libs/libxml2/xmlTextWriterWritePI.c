// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterWritePI
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterWritePI (xmlTextWriterPtr arg0 , const xmlChar * arg1 , const xmlChar * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterWritePI()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterWritePI", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterWritePI. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterWritePI() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterWritePI - arg0 (writer)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlTextWriterWritePI - arg1 (target)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterWritePI - arg1 (target)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlTextWriterWritePI - arg2 (content)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlTextWriterWritePI - arg2 (content)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

