// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkScrollableInterface(struct _GtkScrollableInterface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> base_iface,name ))
		failure = 1;
return failure;
}

