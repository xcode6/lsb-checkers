// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gdbusintrospection.h>

int validate_struct__GDBusArgInfo(struct _GDBusArgInfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ref_count,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> signature,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> annotations,name ))
		failure = 1;
return failure;
}

