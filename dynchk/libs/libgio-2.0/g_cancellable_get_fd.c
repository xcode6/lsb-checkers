// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gcancellable.h>
#undef g_cancellable_get_fd
static int(*funcptr) (GCancellable * ) = 0;

extern int __lsb_check_params;
int g_cancellable_get_fd (GCancellable * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_cancellable_get_fd()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cancellable_get_fd");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cancellable_get_fd. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cancellable_get_fd() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_cancellable_get_fd - arg0 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_cancellable_get_fd - arg0 (cancellable)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

