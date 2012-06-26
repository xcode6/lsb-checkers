// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlwriter.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlTextWriterStartPI
static int(*funcptr) (xmlTextWriterPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlTextWriterStartPI (xmlTextWriterPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlTextWriterStartPI()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextWriterStartPI", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextWriterStartPI. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextWriterStartPI() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextWriterStartPI - arg0 (writer)");
		validate_Rdaddress( arg1, "xmlTextWriterStartPI - arg1 (target)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextWriterStartPI - arg1 (target)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

