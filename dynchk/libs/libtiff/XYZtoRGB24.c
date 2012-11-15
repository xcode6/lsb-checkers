// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiff.h>
#include <tiffio.h>
#undef XYZtoRGB24
static void(*funcptr) (float * , uint8 * ) = 0;

extern int __lsb_check_params;
void XYZtoRGB24 (float * arg0 , uint8 * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XYZtoRGB24()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XYZtoRGB24");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XYZtoRGB24. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XYZtoRGB24() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XYZtoRGB24 - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XYZtoRGB24 - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XYZtoRGB24 - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XYZtoRGB24 - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
