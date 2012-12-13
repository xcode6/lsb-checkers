// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdrive.h>
#undef g_drive_is_media_check_automatic
static gboolean(*funcptr) (GDrive * ) = 0;

extern int __lsb_check_params;
gboolean g_drive_is_media_check_automatic (GDrive * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_drive_is_media_check_automatic()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_drive_is_media_check_automatic");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_drive_is_media_check_automatic. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_drive_is_media_check_automatic() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_drive_is_media_check_automatic - arg0 (drive)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_drive_is_media_check_automatic - arg0 (drive)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

