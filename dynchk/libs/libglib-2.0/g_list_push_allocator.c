// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_list_push_allocator
static void(*funcptr) (GAllocator * ) = 0;

extern int __lsb_check_params;
void g_list_push_allocator (GAllocator * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_list_push_allocator()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_list_push_allocator");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_list_push_allocator. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_list_push_allocator() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_list_push_allocator - arg0 (allocator)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_list_push_allocator - arg0 (allocator)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

