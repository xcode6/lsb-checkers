// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdio.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/debugXML.h>
#undef xmlDebugDumpNode
static void(*funcptr) (FILE * , xmlNodePtr , int ) = 0;

extern int __lsb_check_params;
void xmlDebugDumpNode (FILE * arg0 , xmlNodePtr arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for xmlDebugDumpNode()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "xmlDebugDumpNode", "LIBXML2_2.4.30");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xmlDebugDumpNode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xmlDebugDumpNode() - validating");
		validate_RWaddress( arg0, "xmlDebugDumpNode - arg0 (output)");
		validate_NULL_TYPETYPE(  arg0, "xmlDebugDumpNode - arg0 (output)");
		validate_NULL_TYPETYPE(  arg1, "xmlDebugDumpNode - arg1 (node)");
		validate_NULL_TYPETYPE(  arg2, "xmlDebugDumpNode - arg2 (depth)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

