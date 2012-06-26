// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#undef gtk_text_buffer_insert_pixbuf
static void(*funcptr) (GtkTextBuffer * , GtkTextIter * , GdkPixbuf * ) = 0;

extern int __lsb_check_params;
void gtk_text_buffer_insert_pixbuf (GtkTextBuffer * arg0 , GtkTextIter * arg1 , GdkPixbuf * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_text_buffer_insert_pixbuf()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_text_buffer_insert_pixbuf");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_text_buffer_insert_pixbuf. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_text_buffer_insert_pixbuf() - validating");
		validate_RWaddress( arg0, "gtk_text_buffer_insert_pixbuf - arg0 (buffer)");
		validate_NULL_TYPETYPE(  arg0, "gtk_text_buffer_insert_pixbuf - arg0 (buffer)");
		validate_RWaddress( arg1, "gtk_text_buffer_insert_pixbuf - arg1 (iter)");
		validate_NULL_TYPETYPE(  arg1, "gtk_text_buffer_insert_pixbuf - arg1 (iter)");
		validate_RWaddress( arg2, "gtk_text_buffer_insert_pixbuf - arg2 (pixbuf)");
		validate_NULL_TYPETYPE(  arg2, "gtk_text_buffer_insert_pixbuf - arg2 (pixbuf)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

