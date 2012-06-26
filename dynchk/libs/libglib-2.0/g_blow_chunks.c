// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_blow_chunks
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void g_blow_chunks ()
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_blow_chunks()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_blow_chunks");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_blow_chunks. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_blow_chunks() - validating");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}

