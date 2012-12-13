// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gmenumodel.h>
#undef g_menu_model_items_changed
static void(*funcptr) (GMenuModel * , gint , gint , gint ) = 0;

extern int __lsb_check_params;
void g_menu_model_items_changed (GMenuModel * arg0 , gint arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_menu_model_items_changed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_model_items_changed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_model_items_changed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_model_items_changed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_model_items_changed - arg0 (model)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_model_items_changed - arg0 (model)");
		validate_NULL_TYPETYPE(  arg1, "g_menu_model_items_changed - arg1 (position)");
		validate_NULL_TYPETYPE(  arg2, "g_menu_model_items_changed - arg2 (removed)");
		validate_NULL_TYPETYPE(  arg3, "g_menu_model_items_changed - arg3 (added)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

