// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/parser.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlIO.h>
#undef xmlParseExternalEntity
static int(*funcptr) (xmlDocPtr , xmlSAXHandlerPtr , void * , int , const xmlChar * , const xmlChar * , xmlNodePtr * ) = 0;

extern int __lsb_check_params;
int xmlParseExternalEntity (xmlDocPtr arg0 , xmlSAXHandlerPtr arg1 , void * arg2 , int arg3 , const xmlChar * arg4 , const xmlChar * arg5 , xmlNodePtr * arg6 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlParseExternalEntity()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlParseExternalEntity", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlParseExternalEntity. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlParseExternalEntity() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlParseExternalEntity - arg0 (doc)");
		validate_NULL_TYPETYPE(  arg1, "xmlParseExternalEntity - arg1 (sax)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xmlParseExternalEntity - arg2 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlParseExternalEntity - arg2 (user_data)");
		validate_NULL_TYPETYPE(  arg3, "xmlParseExternalEntity - arg3 (depth)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xmlParseExternalEntity - arg4 (URL)");
		}
		validate_NULL_TYPETYPE(  arg4, "xmlParseExternalEntity - arg4 (URL)");
		if( arg5 ) {
		validate_Rdaddress( arg5, "xmlParseExternalEntity - arg5 (ID)");
		}
		validate_NULL_TYPETYPE(  arg5, "xmlParseExternalEntity - arg5 (ID)");
		if( arg6 ) {
		validate_RWaddress( arg6, "xmlParseExternalEntity - arg6 (lst)");
		}
		validate_NULL_TYPETYPE(  arg6, "xmlParseExternalEntity - arg6 (lst)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}
