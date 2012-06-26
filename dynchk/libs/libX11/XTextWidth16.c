// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XTextWidth16
static int(*funcptr) (XFontStruct * , const XChar2b * , int ) = 0;

extern int __lsb_check_params;
int XTextWidth16 (XFontStruct * arg0 , const XChar2b * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XTextWidth16()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XTextWidth16");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XTextWidth16. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XTextWidth16() - validating");
		validate_RWaddress( arg0, "XTextWidth16 - arg0");
		validate_NULL_TYPETYPE(  arg0, "XTextWidth16 - arg0");
		validate_Rdaddress( arg1, "XTextWidth16 - arg1");
		validate_NULL_TYPETYPE(  arg1, "XTextWidth16 - arg1");
		validate_NULL_TYPETYPE(  arg2, "XTextWidth16 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

