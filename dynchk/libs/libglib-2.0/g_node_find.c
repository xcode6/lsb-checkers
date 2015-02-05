// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_node_find
static GNode *(*funcptr) (GNode * , GTraverseType , GTraverseFlags , gpointer ) = 0;

extern int __lsb_check_params;
GNode * g_node_find (GNode * arg0 , GTraverseType arg1 , GTraverseFlags arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	GNode * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_node_find()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_node_find");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_node_find. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_node_find() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_node_find - arg0 (root)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_node_find - arg0 (root)");
		validate_NULL_TYPETYPE(  arg1, "g_node_find - arg1 (order)");
		validate_NULL_TYPETYPE(  arg2, "g_node_find - arg2 (flags)");
		validate_NULL_TYPETYPE(  arg3, "g_node_find - arg3 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
