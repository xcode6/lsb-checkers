// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gdbusinterfaceskeleton.h>

int validate_struct__GDBusInterfaceSkeletonClass(struct _GDBusInterfaceSkeletonClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_info,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_vtable,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_properties,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> flush,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> vfunc_padding,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> g_authorize_method,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> signal_padding,name ))
		failure = 1;
return failure;
}

