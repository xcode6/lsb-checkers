// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <gtk-3.0/gtk/gtk.h>

int validate_struct__GtkIMContextInfo(struct _GtkIMContextInfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> context_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> context_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> context_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> domain,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> domain_dirname,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> default_locales,name ))
		failure = 1;
return failure;
}

