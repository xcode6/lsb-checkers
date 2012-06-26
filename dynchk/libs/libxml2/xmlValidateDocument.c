// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/valid.h>
#include <libxml2/libxml/tree.h>
#undef xmlValidateDocument
static int(*funcptr) (xmlValidCtxtPtr , xmlDocPtr ) = 0;

extern int __lsb_check_params;
int xmlValidateDocument (xmlValidCtxtPtr arg0 , xmlDocPtr arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlValidateDocument()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlValidateDocument", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlValidateDocument. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlValidateDocument() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlValidateDocument - arg0");
		validate_NULL_TYPETYPE(  arg1, "xmlValidateDocument - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

