// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef g_type_remove_class_cache_func
static void(*funcptr) (gpointer , GTypeClassCacheFunc ) = 0;

extern int __lsb_check_params;
void g_type_remove_class_cache_func (gpointer arg0 , GTypeClassCacheFunc arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_type_remove_class_cache_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_type_remove_class_cache_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_type_remove_class_cache_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_type_remove_class_cache_func() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_type_remove_class_cache_func - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_type_remove_class_cache_func - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

