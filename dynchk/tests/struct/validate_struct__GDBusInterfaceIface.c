// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gdbusinterface.h>

int validate_struct__GDBusInterfaceIface(struct _GDBusInterfaceIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_info,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_object,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> set_object,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> dup_object,name ))
		failure = 1;
return failure;
}
