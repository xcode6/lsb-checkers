// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2EndElementNs
static void(*funcptr) (void * , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
void xmlSAX2EndElementNs (void * arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2EndElementNs()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2EndElementNs", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2EndElementNs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2EndElementNs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlSAX2EndElementNs - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2EndElementNs - arg0 (ctx)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSAX2EndElementNs - arg1 (localname)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2EndElementNs - arg1 (localname)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "xmlSAX2EndElementNs - arg2 (prefix)");
		}
		validate_NULL_TYPETYPE(  arg2, "xmlSAX2EndElementNs - arg2 (prefix)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlSAX2EndElementNs - arg3 (URI)");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlSAX2EndElementNs - arg3 (URI)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

