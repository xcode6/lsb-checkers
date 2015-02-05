// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xft/Xft.h>
#undef XftColorFree
static void(*funcptr) (Display * , Visual * , Colormap , XftColor * ) = 0;

extern int __lsb_check_params;
void XftColorFree (Display * arg0 , Visual * arg1 , Colormap arg2 , XftColor * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XftColorFree()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftColorFree");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftColorFree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftColorFree() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftColorFree - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftColorFree - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftColorFree - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftColorFree - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftColorFree - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "XftColorFree - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftColorFree - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}
