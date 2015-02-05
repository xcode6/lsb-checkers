// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gsettings.h>

int validate_struct__GSettingsClass(struct _GSettingsClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> writable_changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> writable_change_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> change_event,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> padding,name ))
		failure = 1;
return failure;
}
