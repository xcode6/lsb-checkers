// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFScanlineSize
static tmsize_t(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
tmsize_t TIFFScanlineSize (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	tmsize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFScanlineSize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFScanlineSize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFScanlineSize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFScanlineSize() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFScanlineSize - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFScanlineSize - arg0 (tif)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

