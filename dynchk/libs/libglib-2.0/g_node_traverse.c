// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_node_traverse
static void(*funcptr) (GNode * , GTraverseType , GTraverseFlags , gint , GNodeTraverseFunc , gpointer ) = 0;

extern int __lsb_check_params;
void g_node_traverse (GNode * arg0 , GTraverseType arg1 , GTraverseFlags arg2 , gint arg3 , GNodeTraverseFunc arg4 , gpointer arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_node_traverse()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_node_traverse");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_node_traverse. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_node_traverse() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_node_traverse - arg0 (root)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_node_traverse - arg0 (root)");
		validate_NULL_TYPETYPE(  arg1, "g_node_traverse - arg1 (order)");
		validate_NULL_TYPETYPE(  arg2, "g_node_traverse - arg2 (flags)");
		validate_NULL_TYPETYPE(  arg3, "g_node_traverse - arg3 (max_depth)");
		validate_NULL_TYPETYPE(  arg4, "g_node_traverse - arg4 (func)");
		validate_NULL_TYPETYPE(  arg5, "g_node_traverse - arg5 (data)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
