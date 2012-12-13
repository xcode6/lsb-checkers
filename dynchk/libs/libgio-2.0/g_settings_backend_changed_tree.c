// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsettingsbackend.h>
#undef g_settings_backend_changed_tree
static void(*funcptr) (GSettingsBackend * , GTree * , gpointer ) = 0;

extern int __lsb_check_params;
void g_settings_backend_changed_tree (GSettingsBackend * arg0 , GTree * arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_settings_backend_changed_tree()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_backend_changed_tree");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_backend_changed_tree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_backend_changed_tree() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_settings_backend_changed_tree - arg0 (backend)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_settings_backend_changed_tree - arg0 (backend)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_settings_backend_changed_tree - arg1 (tree)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_settings_backend_changed_tree - arg1 (tree)");
		validate_NULL_TYPETYPE(  arg2, "g_settings_backend_changed_tree - arg2 (origin_tag)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

