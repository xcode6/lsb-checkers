// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <libxml2/libxml/debugXML.h>
#include <libxml2/libxml/tree.h>
#undef xmlShellLoad
static int(*funcptr) (xmlShellCtxtPtr , char * , xmlNodePtr , xmlNodePtr ) = 0;

extern int __lsb_check_params;
int xmlShellLoad (xmlShellCtxtPtr arg0 , char * arg1 , xmlNodePtr arg2 , xmlNodePtr arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xmlShellLoad()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlShellLoad", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlShellLoad. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlShellLoad() - validating");
		validate_NULL_TYPETYPE(  arg0, "xmlShellLoad - arg0 (ctxt)");
		if( arg1 ) {
		validate_RWaddress( arg1, "xmlShellLoad - arg1 (filename)");
		}
		validate_NULL_TYPETYPE(  arg1, "xmlShellLoad - arg1 (filename)");
		validate_NULL_TYPETYPE(  arg2, "xmlShellLoad - arg2 (node)");
		validate_NULL_TYPETYPE(  arg3, "xmlShellLoad - arg3 (node2)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
