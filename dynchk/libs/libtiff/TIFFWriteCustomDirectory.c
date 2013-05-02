// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFWriteCustomDirectory
static int(*funcptr) (TIFF * , uint64 * ) = 0;

extern int __lsb_check_params;
int TIFFWriteCustomDirectory (TIFF * arg0 , uint64 * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFWriteCustomDirectory()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFWriteCustomDirectory");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFWriteCustomDirectory. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFWriteCustomDirectory() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFWriteCustomDirectory - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFWriteCustomDirectory - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFWriteCustomDirectory - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFWriteCustomDirectory - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

