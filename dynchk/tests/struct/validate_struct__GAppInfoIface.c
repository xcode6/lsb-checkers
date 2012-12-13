// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gappinfo.h>

int validate_struct__GAppInfoIface(struct _GAppInfoIface  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> g_iface,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> dup,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> equal,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_id,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_description,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_executable,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_icon,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> launch,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> supports_uris,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> supports_files,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> launch_uris,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> should_show,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> set_as_default_for_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> set_as_default_for_extension,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> add_supports_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_remove_supports_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> remove_supports_type,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> can_delete,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> do_delete,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_commandline,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_display_name,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> set_as_last_used_for_type,name ))
		failure = 1;
return failure;
}

