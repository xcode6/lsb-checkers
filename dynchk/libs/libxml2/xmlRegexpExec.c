// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/xmlstring.h>
#undef xmlRegexpExec
static int(*funcptr) (xmlRegexpPtr , const xmlChar * ) = 0;

extern int __lsb_check_params;
int xmlRegexpExec (xmlRegexpPtr arg0 , const xmlChar * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlRegexpExec()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRegexpExec", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRegexpExec. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRegexpExec() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRegexpExec - arg0 (comp)");
		validate_Rdaddress( arg1, "xmlRegexpExec - arg1 (value)");
		validate_NULL_TYPETYPE(  arg1, "xmlRegexpExec - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

