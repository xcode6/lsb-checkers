// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_object_newv
static gpointer(*funcptr) (GType , guint , GParameter * ) = 0;

extern int __lsb_check_params;
gpointer g_object_newv (GType arg0 , guint arg1 , GParameter * arg2 )
{
	int reset_flag = __lsb_check_params;
	gpointer ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_object_newv()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_object_newv");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_object_newv. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_object_newv() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_object_newv - arg0");
		validate_NULL_TYPETYPE(  arg1, "g_object_newv - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_object_newv - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "g_object_newv - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

