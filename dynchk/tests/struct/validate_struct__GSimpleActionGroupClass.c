// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gsimpleactiongroup.h>

int validate_struct__GSimpleActionGroupClass(struct _GSimpleActionGroupClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}

