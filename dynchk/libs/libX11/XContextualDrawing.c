// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XContextualDrawing
static int(*funcptr) (XFontSet ) = 0;

extern int __lsb_check_params;
int XContextualDrawing (XFontSet arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XContextualDrawing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XContextualDrawing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XContextualDrawing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XContextualDrawing() - validating");
		validate_NULL_TYPETYPE(  arg0, "XContextualDrawing - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

