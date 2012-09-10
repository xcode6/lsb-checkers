// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/parserInternals.h>
#undef xmlStringDecodeEntities
static xmlChar *(*funcptr) (xmlParserCtxtPtr , const xmlChar * , int , xmlChar , xmlChar , xmlChar ) = 0;

extern int __lsb_check_params;
xmlChar * xmlStringDecodeEntities (xmlParserCtxtPtr arg0 , const xmlChar * arg1 , int arg2 , xmlChar arg3 , xmlChar arg4 , xmlChar arg5 )
{
	int reset_flag = __lsb_check_params;
	xmlChar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlStringDecodeEntities()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlStringDecodeEntities", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlStringDecodeEntities. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlStringDecodeEntities() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlStringDecodeEntities - arg0 (ctxt)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlStringDecodeEntities - arg1 (str)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlStringDecodeEntities - arg1 (str)");
		validate_NULL_TYPETYPE(  arg2, "xmlStringDecodeEntities - arg2 (what)");
		validate_NULL_TYPETYPE(  arg3, "xmlStringDecodeEntities - arg3 (end)");
		validate_NULL_TYPETYPE(  arg4, "xmlStringDecodeEntities - arg4 (end2)");
		validate_NULL_TYPETYPE(  arg5, "xmlStringDecodeEntities - arg5 (end3)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

