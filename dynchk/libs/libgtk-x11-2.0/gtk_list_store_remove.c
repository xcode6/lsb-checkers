// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_list_store_remove
static gboolean(*funcptr) (GtkListStore * , GtkTreeIter * ) = 0;

extern int __lsb_check_params;
gboolean gtk_list_store_remove (GtkListStore * arg0 , GtkTreeIter * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_list_store_remove()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_list_store_remove");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_list_store_remove. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_list_store_remove() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_list_store_remove - arg0 (list_store)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_list_store_remove - arg0 (list_store)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_list_store_remove - arg1 (iter)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_list_store_remove - arg1 (iter)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

