// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XUninstallColormap
static int(*funcptr) (Display * , Colormap ) = 0;

extern int __lsb_check_params;
int XUninstallColormap (Display * arg0 , Colormap arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XUninstallColormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XUninstallColormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XUninstallColormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XUninstallColormap() - validating");
		validate_RWaddress( arg0, "XUninstallColormap - arg0");
		validate_NULL_TYPETYPE(  arg0, "XUninstallColormap - arg0");
		validate_NULL_TYPETYPE(  arg1, "XUninstallColormap - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

