// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/extensions/Xdbeproto.h>
#include <X11/extensions/Xdbe.h>
#undef XdbeFreeVisualInfo
static void(*funcptr) (XdbeScreenVisualInfo * ) = 0;

extern int __lsb_check_params;
void XdbeFreeVisualInfo (XdbeScreenVisualInfo * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XdbeFreeVisualInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeFreeVisualInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XdbeFreeVisualInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XdbeFreeVisualInfo() - validating");
		validate_RWaddress( arg0, "XdbeFreeVisualInfo - arg0");
		validate_NULL_TYPETYPE(  arg0, "XdbeFreeVisualInfo - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

