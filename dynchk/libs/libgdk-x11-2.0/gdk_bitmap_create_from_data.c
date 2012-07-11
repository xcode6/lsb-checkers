// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_bitmap_create_from_data
static struct _GdkDrawable *(*funcptr) (GdkDrawable * , const gchar * , gint , gint ) = 0;

extern int __lsb_check_params;
struct _GdkDrawable * gdk_bitmap_create_from_data (GdkDrawable * arg0 , const gchar * arg1 , gint arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	struct _GdkDrawable * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_bitmap_create_from_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_bitmap_create_from_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_bitmap_create_from_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_bitmap_create_from_data() - validating");
		validate_RWaddress( arg0, "gdk_bitmap_create_from_data - arg0 (drawable)");
		validate_NULL_TYPETYPE(  arg0, "gdk_bitmap_create_from_data - arg0 (drawable)");
		validate_Rdaddress( arg1, "gdk_bitmap_create_from_data - arg1 (data)");
		validate_NULL_TYPETYPE(  arg1, "gdk_bitmap_create_from_data - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "gdk_bitmap_create_from_data - arg2 (width)");
		validate_NULL_TYPETYPE(  arg3, "gdk_bitmap_create_from_data - arg3 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}
