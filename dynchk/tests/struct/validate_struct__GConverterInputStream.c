// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gconverterinputstream.h>

int validate_struct__GConverterInputStream(struct _GConverterInputStream  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_instance,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> priv,name ))
		failure = 1;
return failure;
}

