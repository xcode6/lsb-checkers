// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/XKBstr.h>
#include <X11/XKBlib.h>
#undef XkbFreeIndicatorMaps
static void(*funcptr) (XkbDescPtr ) = 0;

extern int __lsb_check_params;
void XkbFreeIndicatorMaps (XkbDescPtr arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XkbFreeIndicatorMaps()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeIndicatorMaps");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbFreeIndicatorMaps. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbFreeIndicatorMaps() - validating");
		validate_NULL_TYPETYPE(  arg0, "XkbFreeIndicatorMaps - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

