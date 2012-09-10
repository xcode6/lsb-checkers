// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#undef g_cclosure_new_object
static GClosure *(*funcptr) (GCallback , GObject * ) = 0;

extern int __lsb_check_params;
GClosure * g_cclosure_new_object (GCallback arg0 , GObject * arg1 )
{
	int reset_flag = __lsb_check_params;
	GClosure * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_cclosure_new_object()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cclosure_new_object");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cclosure_new_object. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cclosure_new_object() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_cclosure_new_object - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_cclosure_new_object - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "g_cclosure_new_object - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

