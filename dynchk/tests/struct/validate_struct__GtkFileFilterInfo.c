// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkFileFilterInfo(struct _GtkFileFilterInfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> contains,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> filename,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> uri,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> display_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> mime_type,name ))
		failure = 1;
return failure;
}

