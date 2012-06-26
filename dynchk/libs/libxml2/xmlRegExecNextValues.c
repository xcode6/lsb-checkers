// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/xmlregexp.h>
#include <libxml2/libxml/tree.h>
#undef xmlRegExecNextValues
static int(*funcptr) (xmlRegExecCtxtPtr , int * , int * , xmlChar * * , int * ) = 0;

extern int __lsb_check_params;
int xmlRegExecNextValues (xmlRegExecCtxtPtr arg0 , int * arg1 , int * arg2 , xmlChar * * arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlRegExecNextValues()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlRegExecNextValues", "LIBXML2_2.6.17");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlRegExecNextValues. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlRegExecNextValues() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlRegExecNextValues - arg0 (exec)");
		validate_RWaddress( arg1, "xmlRegExecNextValues - arg1 (nbval)");
		validate_NULL_TYPETYPE(  arg1, "xmlRegExecNextValues - arg1 (nbval)");
		validate_RWaddress( arg2, "xmlRegExecNextValues - arg2 (nbneg)");
		validate_NULL_TYPETYPE(  arg2, "xmlRegExecNextValues - arg2 (nbneg)");
		validate_RWaddress( arg3, "xmlRegExecNextValues - arg3 (values)");
		validate_NULL_TYPETYPE(  arg3, "xmlRegExecNextValues - arg3 (values)");
		validate_RWaddress( arg4, "xmlRegExecNextValues - arg4 (terminal)");
		validate_NULL_TYPETYPE(  arg4, "xmlRegExecNextValues - arg4 (terminal)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

