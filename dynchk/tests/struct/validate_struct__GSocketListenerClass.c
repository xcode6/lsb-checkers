// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gsocketlistener.h>

int validate_struct__GSocketListenerClass(struct _GSocketListenerClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> changed,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved1,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved2,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved3,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved4,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved5,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> _g_reserved6,name ))
		failure = 1;
return failure;
}

