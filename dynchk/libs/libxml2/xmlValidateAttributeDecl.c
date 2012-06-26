// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#undef xmlValidateAttributeDecl
static int(*funcptr) (xmlValidCtxtPtr , xmlDocPtr , xmlAttributePtr ) = 0;

extern int __lsb_check_params;
int xmlValidateAttributeDecl (xmlValidCtxtPtr arg0 , xmlDocPtr arg1 , xmlAttributePtr arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidateAttributeDecl()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidateAttributeDecl", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidateAttributeDecl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidateAttributeDecl() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlValidateAttributeDecl - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlValidateAttributeDecl - arg1");
		validate_NULL_TYPETYPE(  arg2, "xmlValidateAttributeDecl - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

