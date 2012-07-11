// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#include <pango-1.0/pango/pango.h>
#undef gtk_im_context_get_preedit_string
static void(*funcptr) (GtkIMContext * , gchar * * , PangoAttrList * * , gint * ) = 0;

extern int __lsb_check_params;
void gtk_im_context_get_preedit_string (GtkIMContext * arg0 , gchar * * arg1 , PangoAttrList * * arg2 , gint * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_im_context_get_preedit_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_im_context_get_preedit_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_im_context_get_preedit_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_im_context_get_preedit_string() - validating");
		validate_RWaddress( arg0, "gtk_im_context_get_preedit_string - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "gtk_im_context_get_preedit_string - arg0 (context)");
		validate_RWaddress( arg1, "gtk_im_context_get_preedit_string - arg1 (str)");
		validate_NULL_TYPETYPE(  arg1, "gtk_im_context_get_preedit_string - arg1 (str)");
		validate_RWaddress( arg2, "gtk_im_context_get_preedit_string - arg2 (attrs)");
		validate_NULL_TYPETYPE(  arg2, "gtk_im_context_get_preedit_string - arg2 (attrs)");
		validate_RWaddress( arg3, "gtk_im_context_get_preedit_string - arg3 (cursor_pos)");
		validate_NULL_TYPETYPE(  arg3, "gtk_im_context_get_preedit_string - arg3 (cursor_pos)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
