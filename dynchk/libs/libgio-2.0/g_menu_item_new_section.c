// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gmenu.h>
#undef g_menu_item_new_section
static GMenuItem *(*funcptr) (const gchar * , GMenuModel * ) = 0;

extern int __lsb_check_params;
GMenuItem * g_menu_item_new_section (const gchar * arg0 , GMenuModel * arg1 )
{
	int reset_flag = __lsb_check_params;
	GMenuItem * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_menu_item_new_section()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_item_new_section");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_item_new_section. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_item_new_section() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_menu_item_new_section - arg0 (label)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_item_new_section - arg0 (label)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_menu_item_new_section - arg1 (section)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_menu_item_new_section - arg1 (section)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

