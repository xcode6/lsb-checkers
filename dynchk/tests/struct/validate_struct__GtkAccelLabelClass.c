// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkAccelLabelClass(struct _GtkAccelLabelClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> signal_quote1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> signal_quote2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mod_name_shift,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mod_name_control,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mod_name_alt,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mod_separator,name ))
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

