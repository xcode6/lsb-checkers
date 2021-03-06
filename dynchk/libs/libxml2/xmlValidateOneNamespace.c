// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlValidateOneNamespace
static int(*funcptr) (xmlValidCtxtPtr , xmlDocPtr , xmlNodePtr , const xmlChar * , xmlNsPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlValidateOneNamespace (xmlValidCtxtPtr arg0 , xmlDocPtr arg1 , xmlNodePtr arg2 , const xmlChar * arg3 , xmlNsPtr arg4 , const xmlChar * arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidateOneNamespace()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidateOneNamespace", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidateOneNamespace. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidateOneNamespace() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlValidateOneNamespace - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlValidateOneNamespace - arg1");
		validate_NULL_TYPETYPE(  arg2, "xmlValidateOneNamespace - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xmlValidateOneNamespace - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "xmlValidateOneNamespace - arg3");
		validate_NULL_TYPETYPE(  arg4, "xmlValidateOneNamespace - arg4");
		if( arg5 ) {
		validate_Rdaddress( arg5, "xmlValidateOneNamespace - arg5");
		}
		validate_NULL_TYPETYPE(  arg5, "xmlValidateOneNamespace - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

