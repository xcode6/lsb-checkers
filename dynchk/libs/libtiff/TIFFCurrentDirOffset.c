// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFCurrentDirOffset
static uint64(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
uint64 TIFFCurrentDirOffset (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	uint64 ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFCurrentDirOffset()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFCurrentDirOffset");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFCurrentDirOffset. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFCurrentDirOffset() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFCurrentDirOffset - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFCurrentDirOffset - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
