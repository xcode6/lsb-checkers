// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gdbusintrospection.h>

int validate_struct__GDBusMethodInfo(struct _GDBusMethodInfo  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> ref_count,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> in_args,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> out_args,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> annotations,name ))
		failure = 1;
return failure;
}
