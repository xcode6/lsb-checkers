// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2Reference
static void(*funcptr) (void * , const xmlChar * ) = 0;

extern int __lsb_check_params;
void xmlSAX2Reference (void * arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2Reference()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2Reference", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2Reference. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2Reference() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xmlSAX2Reference - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2Reference - arg0 (ctx)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "xmlSAX2Reference - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2Reference - arg1 (name)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

