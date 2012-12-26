// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_object_set_data
static void(*funcptr) (GObject * , const gchar * , gpointer ) = 0;

extern int __lsb_check_params;
void g_object_set_data (GObject * arg0 , const gchar * arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_object_set_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_object_set_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_object_set_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_object_set_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_object_set_data - arg0 (object)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_object_set_data - arg0 (object)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_object_set_data - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_object_set_data - arg1 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_object_set_data - arg2 (data)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

