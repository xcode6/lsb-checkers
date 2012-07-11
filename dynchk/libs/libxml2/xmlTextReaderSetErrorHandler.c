// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlreader.h>
#undef xmlTextReaderSetErrorHandler
static void(*funcptr) (xmlTextReaderPtr , xmlTextReaderErrorFunc , void * ) = 0;

extern int __lsb_check_params;
void xmlTextReaderSetErrorHandler (xmlTextReaderPtr arg0 , xmlTextReaderErrorFunc arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlTextReaderSetErrorHandler()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlTextReaderSetErrorHandler", "LIBXML2_2.5.2");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlTextReaderSetErrorHandler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlTextReaderSetErrorHandler() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlTextReaderSetErrorHandler - arg0 (reader)");
		validate_NULL_TYPETYPE(  arg1, "xmlTextReaderSetErrorHandler - arg1 (f)");
		validate_RWaddress( arg2, "xmlTextReaderSetErrorHandler - arg2 (arg)");
		validate_NULL_TYPETYPE(  arg2, "xmlTextReaderSetErrorHandler - arg2 (arg)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
