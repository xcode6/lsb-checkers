// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/SAX2.h>
#undef xmlSAX2AttributeDecl
static void(*funcptr) (void * , const xmlChar * , const xmlChar * , int , int , const xmlChar * , xmlEnumerationPtr ) = 0;

extern int __lsb_check_params;
void xmlSAX2AttributeDecl (void * arg0 , const xmlChar * arg1 , const xmlChar * arg2 , int arg3 , int arg4 , const xmlChar * arg5 , xmlEnumerationPtr arg6 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlSAX2AttributeDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlSAX2AttributeDecl", "LIBXML2_2.6.0");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlSAX2AttributeDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlSAX2AttributeDecl() - validating");
		validate_RWaddress( arg0, "xmlSAX2AttributeDecl - arg0 (ctx)");
		validate_NULL_TYPETYPE(  arg0, "xmlSAX2AttributeDecl - arg0 (ctx)");
		validate_Rdaddress( arg1, "xmlSAX2AttributeDecl - arg1 (elem)");
		validate_NULL_TYPETYPE(  arg1, "xmlSAX2AttributeDecl - arg1 (elem)");
		validate_Rdaddress( arg2, "xmlSAX2AttributeDecl - arg2 (fullname)");
		validate_NULL_TYPETYPE(  arg2, "xmlSAX2AttributeDecl - arg2 (fullname)");
		validate_NULL_TYPETYPE(  arg3, "xmlSAX2AttributeDecl - arg3 (type)");
		validate_NULL_TYPETYPE(  arg4, "xmlSAX2AttributeDecl - arg4 (def)");
		validate_Rdaddress( arg5, "xmlSAX2AttributeDecl - arg5 (defaultValue)");
		validate_NULL_TYPETYPE(  arg5, "xmlSAX2AttributeDecl - arg5 (defaultValue)");
		validate_NULL_TYPETYPE(  arg6, "xmlSAX2AttributeDecl - arg6 (tree)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
}
