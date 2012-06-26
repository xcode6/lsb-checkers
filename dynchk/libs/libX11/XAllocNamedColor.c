// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XAllocNamedColor
static int(*funcptr) (Display * , Colormap , const char * , XColor * , XColor * ) = 0;

extern int __lsb_check_params;
int XAllocNamedColor (Display * arg0 , Colormap arg1 , const char * arg2 , XColor * arg3 , XColor * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XAllocNamedColor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllocNamedColor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XAllocNamedColor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XAllocNamedColor() - validating");
		validate_RWaddress( arg0, "XAllocNamedColor - arg0");
		validate_NULL_TYPETYPE(  arg0, "XAllocNamedColor - arg0");
		validate_NULL_TYPETYPE(  arg1, "XAllocNamedColor - arg1");
		validate_Rdaddress( arg2, "XAllocNamedColor - arg2");
		validate_NULL_TYPETYPE(  arg2, "XAllocNamedColor - arg2");
		validate_RWaddress( arg3, "XAllocNamedColor - arg3");
		validate_NULL_TYPETYPE(  arg3, "XAllocNamedColor - arg3");
		validate_RWaddress( arg4, "XAllocNamedColor - arg4");
		validate_NULL_TYPETYPE(  arg4, "XAllocNamedColor - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

