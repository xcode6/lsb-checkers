// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusintrospection.h>
#undef g_dbus_annotation_info_lookup
static const char *(*funcptr) (GDBusAnnotationInfo * * , const gchar * ) = 0;

extern int __lsb_check_params;
const char * g_dbus_annotation_info_lookup (GDBusAnnotationInfo * * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_annotation_info_lookup()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_annotation_info_lookup");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_annotation_info_lookup. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_annotation_info_lookup() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_annotation_info_lookup - arg0 (annotations)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_annotation_info_lookup - arg0 (annotations)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_annotation_info_lookup - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_annotation_info_lookup - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

