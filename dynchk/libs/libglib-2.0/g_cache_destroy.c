// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_cache_destroy
static void(*funcptr) (GCache * ) = 0;

extern int __lsb_check_params;
void g_cache_destroy (GCache * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_cache_destroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_cache_destroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_cache_destroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_cache_destroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_cache_destroy - arg0 (cache)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_cache_destroy - arg0 (cache)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

