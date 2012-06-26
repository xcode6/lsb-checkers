// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#include <X11/X.h>
#include <X11/Xft/Xft.h>
#undef XftColorAllocName
static int(*funcptr) (Display * , const Visual * , Colormap , const char * , XftColor * ) = 0;

extern int __lsb_check_params;
int XftColorAllocName (Display * arg0 , const Visual * arg1 , Colormap arg2 , const char * arg3 , XftColor * arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftColorAllocName()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftColorAllocName");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftColorAllocName. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftColorAllocName() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftColorAllocName - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftColorAllocName - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "XftColorAllocName - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftColorAllocName - arg1");
		validate_NULL_TYPETYPE(  arg2, "XftColorAllocName - arg2");
		if( arg3 ) {
		validate_Rdaddress( arg3, "XftColorAllocName - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "XftColorAllocName - arg3");
		if( arg4 ) {
		validate_RWaddress( arg4, "XftColorAllocName - arg4");
		}
		validate_NULL_TYPETYPE(  arg4, "XftColorAllocName - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

