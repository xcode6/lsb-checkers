// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_type_interface_peek
static gpointer(*funcptr) (gpointer , GType ) = 0;

extern int __lsb_check_params;
gpointer g_type_interface_peek (gpointer arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_type_interface_peek()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_interface_peek");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_interface_peek. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_interface_peek() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_interface_peek - arg0 (instance_class)");
		validate_NULL_TYPETYPE(  arg1, "g_type_interface_peek - arg1 (iface_type)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

