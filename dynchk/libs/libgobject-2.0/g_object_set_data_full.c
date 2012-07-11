// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_object_set_data_full
static void(*funcptr) (GObject * , const gchar * , gpointer , GDestroyNotify ) = 0;

extern int __lsb_check_params;
void g_object_set_data_full (GObject * arg0 , const gchar * arg1 , gpointer arg2 , GDestroyNotify arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_object_set_data_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_object_set_data_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_object_set_data_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_object_set_data_full() - validating");
		validate_RWaddress( arg0, "g_object_set_data_full - arg0");
		validate_NULL_TYPETYPE(  arg0, "g_object_set_data_full - arg0");
		validate_Rdaddress( arg1, "g_object_set_data_full - arg1");
		validate_NULL_TYPETYPE(  arg1, "g_object_set_data_full - arg1");
		validate_NULL_TYPETYPE(  arg2, "g_object_set_data_full - arg2");
		validate_NULL_TYPETYPE(  arg3, "g_object_set_data_full - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
