// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFRasterScanlineSize64
static uint64(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
uint64 TIFFRasterScanlineSize64 (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	uint64 ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFRasterScanlineSize64()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFRasterScanlineSize64");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFRasterScanlineSize64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFRasterScanlineSize64() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFRasterScanlineSize64 - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFRasterScanlineSize64 - arg0 (tif)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
