// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdint.h>
#include <xcb/xcbext.h>
#undef xcb_popcount
static int(*funcptr) (uint32_t ) = 0;

extern int __lsb_check_params;
int xcb_popcount (uint32_t arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_popcount()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_popcount");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_popcount. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_popcount() - validating");
		validate_NULL_TYPETYPE(  arg0, "xcb_popcount - arg0 (mask)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
