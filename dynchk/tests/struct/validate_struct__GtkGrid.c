// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkGrid(struct _GtkGrid  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> container,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> container,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> priv,name ))
		failure = 1;
return failure;
}

