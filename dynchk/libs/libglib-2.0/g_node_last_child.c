// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_node_last_child
static GNode *(*funcptr) (GNode * ) = 0;

extern int __lsb_check_params;
GNode * g_node_last_child (GNode * arg0 )
{
	int reset_flag = __lsb_check_params;
	GNode * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_node_last_child()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_node_last_child");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_node_last_child. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_node_last_child() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_node_last_child - arg0 (node)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_node_last_child - arg0 (node)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

