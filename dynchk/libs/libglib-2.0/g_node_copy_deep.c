// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_node_copy_deep
static GNode *(*funcptr) (GNode * , GCopyFunc , gpointer ) = 0;

extern int __lsb_check_params;
GNode * g_node_copy_deep (GNode * arg0 , GCopyFunc arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	GNode * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_node_copy_deep()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_node_copy_deep");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_node_copy_deep. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_node_copy_deep() - validating");
		validate_RWaddress( arg0, "g_node_copy_deep - arg0 (node)");
		validate_NULL_TYPETYPE(  arg0, "g_node_copy_deep - arg0 (node)");
		validate_NULL_TYPETYPE(  arg1, "g_node_copy_deep - arg1 (copy_func)");
		validate_NULL_TYPETYPE(  arg2, "g_node_copy_deep - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
