// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkLabelClass(struct _GtkLabelClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> move_cursor,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> copy_clipboard,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> populate_popup,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> activate_link,name ))
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
