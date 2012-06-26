// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2UnparsedEntityDecl
static void(*funcptr) (void * , const xmlChar * , const xmlChar * , const xmlChar * , const xmlChar * ) = 0;

extern int __lsb_check_params;
void xmlSAX2UnparsedEntityDecl (void * arg0 , const xmlChar * arg1 , const xmlChar * arg2 , const xmlChar * arg3 , const xmlChar * arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2UnparsedEntityDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2UnparsedEntityDecl", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2UnparsedEntityDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2UnparsedEntityDecl() - validating");
		validate_RWaddress( arg0, "xmlSAX2UnparsedEntityDecl - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2UnparsedEntityDecl - arg0 (ctx)");
		validate_Rdaddress( arg1, "xmlSAX2UnparsedEntityDecl - arg1 (name)");
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2UnparsedEntityDecl - arg1 (name)");
		validate_Rdaddress( arg2, "xmlSAX2UnparsedEntityDecl - arg2 (publicId)");
		validate_NULL_TYPETYPE(  arg2, "xmlSAX2UnparsedEntityDecl - arg2 (publicId)");
		validate_Rdaddress( arg3, "xmlSAX2UnparsedEntityDecl - arg3 (systemId)");
		validate_NULL_TYPETYPE(  arg3, "xmlSAX2UnparsedEntityDecl - arg3 (systemId)");
		validate_Rdaddress( arg4, "xmlSAX2UnparsedEntityDecl - arg4 (notationName)");
		validate_NULL_TYPETYPE(  arg4, "xmlSAX2UnparsedEntityDecl - arg4 (notationName)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

