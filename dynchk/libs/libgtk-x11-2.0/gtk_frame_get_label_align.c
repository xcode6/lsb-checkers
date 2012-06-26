// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_frame_get_label_align
static void(*funcptr) (GtkFrame * , gfloat * , gfloat * ) = 0;

extern int __lsb_check_params;
void gtk_frame_get_label_align (GtkFrame * arg0 , gfloat * arg1 , gfloat * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_frame_get_label_align()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_frame_get_label_align");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_frame_get_label_align. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_frame_get_label_align() - validating");
		validate_RWaddress( arg0, "gtk_frame_get_label_align - arg0 (frame)");
		validate_NULL_TYPETYPE(  arg0, "gtk_frame_get_label_align - arg0 (frame)");
		validate_RWaddress( arg1, "gtk_frame_get_label_align - arg1 (xalign)");
		validate_NULL_TYPETYPE(  arg1, "gtk_frame_get_label_align - arg1 (xalign)");
		validate_RWaddress( arg2, "gtk_frame_get_label_align - arg2 (yalign)");
		validate_NULL_TYPETYPE(  arg2, "gtk_frame_get_label_align - arg2 (yalign)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

