// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkTreeViewClass(struct _GtkTreeViewClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_activated,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> test_expand_row,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> test_collapse_row,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_expanded,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> row_collapsed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> columns_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> cursor_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_cursor,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_all,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> unselect_all,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_cursor_row,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> toggle_cursor_row,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> expand_collapse_cursor_row,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> select_cursor_parent,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> start_interactive_search,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved5,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved6,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved7,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _gtk_reserved8,name ))
		failure = 1;
return failure;
}

