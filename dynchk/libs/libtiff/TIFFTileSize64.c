// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFTileSize64
static uint64(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
uint64 TIFFTileSize64 (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	uint64 ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFTileSize64()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFTileSize64");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFTileSize64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFTileSize64() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFTileSize64 - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFTileSize64 - arg0 (tif)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
