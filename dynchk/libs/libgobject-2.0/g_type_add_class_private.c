// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_type_add_class_private
static void(*funcptr) (GType , gsize ) = 0;

extern int __lsb_check_params;
void g_type_add_class_private (GType arg0 , gsize arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_type_add_class_private()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_add_class_private");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_add_class_private. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_add_class_private() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_add_class_private - arg0 (class_type)");
		validate_NULL_TYPETYPE(  arg1, "g_type_add_class_private - arg1 (private_size)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

