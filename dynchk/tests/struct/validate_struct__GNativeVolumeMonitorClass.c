// Code generated by gen_tests.pl

#include "../type_tests.h"
#include <glib-2.0/gio/gnativevolumemonitor.h>

int validate_struct__GNativeVolumeMonitorClass(struct _GNativeVolumeMonitorClass  * input, char *name)
{
int failure = 0;
	if(validate_NULL_TYPETYPE(input-> parent_class,name ))
		failure = 1;
	if(validate_NULL_TYPETYPE(input-> get_mount_for_mount_path,name ))
		failure = 1;
return failure;
}
