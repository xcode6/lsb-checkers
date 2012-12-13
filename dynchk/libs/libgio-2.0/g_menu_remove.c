// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gmenu.h>
#include <glib-2.0/glib.h>
#undef g_menu_remove
static void(*funcptr) (GMenu * , gint ) = 0;

extern int __lsb_check_params;
void g_menu_remove (GMenu * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_menu_remove()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_menu_remove");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_menu_remove. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_menu_remove() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_menu_remove - arg0 (menu)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_menu_remove - arg0 (menu)");
		validate_NULL_TYPETYPE(  arg1, "g_menu_remove - arg1 (position)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

