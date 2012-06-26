// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_layout_new
static PangoLayout *(*funcptr) (PangoContext * ) = 0;

extern int __lsb_check_params;
PangoLayout * pango_layout_new (PangoContext * arg0 )
{
	int reset_flag = __lsb_check_params;
	PangoLayout * ret_value  ;
	__lsb_output(4, "Invoking wrapper for pango_layout_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_layout_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_layout_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_layout_new() - validating");
		validate_RWaddress( arg0, "pango_layout_new - arg0 (context)");
		validate_NULL_TYPETYPE(  arg0, "pango_layout_new - arg0 (context)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

