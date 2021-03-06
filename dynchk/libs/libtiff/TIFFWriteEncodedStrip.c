// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFWriteEncodedStrip
static tmsize_t(*funcptr) (TIFF * , uint32 , void * , tmsize_t ) = 0;

extern int __lsb_check_params;
tmsize_t TIFFWriteEncodedStrip (TIFF * arg0 , uint32 arg1 , void * arg2 , tmsize_t arg3 )
{
	int reset_flag = __lsb_check_params;
	tmsize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFWriteEncodedStrip()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFWriteEncodedStrip");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFWriteEncodedStrip. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFWriteEncodedStrip() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFWriteEncodedStrip - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFWriteEncodedStrip - arg0 (tif)");
		validate_NULL_TYPETYPE(  arg1, "TIFFWriteEncodedStrip - arg1 (strip)");
		if( arg2 ) {
		validate_RWaddress( arg2, "TIFFWriteEncodedStrip - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "TIFFWriteEncodedStrip - arg2 (data)");
		validate_NULL_TYPETYPE(  arg3, "TIFFWriteEncodedStrip - arg3 (cc)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

