// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XGetPixel
static unsigned long int(*funcptr) (XImage * , int , int ) = 0;

extern int __lsb_check_params;
unsigned long int XGetPixel (XImage * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	unsigned long int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetPixel()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetPixel");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetPixel. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetPixel() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XGetPixel - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XGetPixel - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetPixel - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetPixel - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

