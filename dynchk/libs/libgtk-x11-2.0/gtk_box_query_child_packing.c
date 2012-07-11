// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_box_query_child_packing
static void(*funcptr) (GtkBox * , GtkWidget * , gboolean * , gboolean * , guint * , GtkPackType * ) = 0;

extern int __lsb_check_params;
void gtk_box_query_child_packing (GtkBox * arg0 , GtkWidget * arg1 , gboolean * arg2 , gboolean * arg3 , guint * arg4 , GtkPackType * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_box_query_child_packing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_box_query_child_packing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_box_query_child_packing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_box_query_child_packing() - validating");
		validate_RWaddress( arg0, "gtk_box_query_child_packing - arg0 (box)");
		validate_NULL_TYPETYPE(  arg0, "gtk_box_query_child_packing - arg0 (box)");
		validate_RWaddress( arg1, "gtk_box_query_child_packing - arg1 (child)");
		validate_NULL_TYPETYPE(  arg1, "gtk_box_query_child_packing - arg1 (child)");
		validate_RWaddress( arg2, "gtk_box_query_child_packing - arg2 (expand)");
		validate_NULL_TYPETYPE(  arg2, "gtk_box_query_child_packing - arg2 (expand)");
		validate_RWaddress( arg3, "gtk_box_query_child_packing - arg3 (fill)");
		validate_NULL_TYPETYPE(  arg3, "gtk_box_query_child_packing - arg3 (fill)");
		validate_RWaddress( arg4, "gtk_box_query_child_packing - arg4 (padding)");
		validate_NULL_TYPETYPE(  arg4, "gtk_box_query_child_packing - arg4 (padding)");
		validate_RWaddress( arg5, "gtk_box_query_child_packing - arg5 (pack_type)");
		validate_NULL_TYPETYPE(  arg5, "gtk_box_query_child_packing - arg5 (pack_type)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}
