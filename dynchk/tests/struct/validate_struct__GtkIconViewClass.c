// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkIconViewClass(struct _GtkIconViewClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> item_activated,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> selection_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_all,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unselect_all,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_cursor_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> toggle_cursor_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_cursor,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate_cursor_item,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved4,name ))
		failure = 1;
return failure;
}
