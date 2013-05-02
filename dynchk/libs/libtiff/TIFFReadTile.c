// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#include <tiff.h>
#undef TIFFReadTile
static tmsize_t(*funcptr) (TIFF * , void * , uint32 , uint32 , uint32 , uint16 ) = 0;

extern int __lsb_check_params;
tmsize_t TIFFReadTile (TIFF * arg0 , void * arg1 , uint32 arg2 , uint32 arg3 , uint32 arg4 , uint16 arg5 )
{
	int reset_flag = __lsb_check_params;
	tmsize_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFReadTile()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFReadTile");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFReadTile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFReadTile() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFReadTile - arg0 (tif)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFReadTile - arg0 (tif)");
		if( arg1 ) {
		validate_RWaddress( arg1, "TIFFReadTile - arg1 (buf)");
		}
		validate_NULL_TYPETYPE(  arg1, "TIFFReadTile - arg1 (buf)");
		validate_NULL_TYPETYPE(  arg2, "TIFFReadTile - arg2 (x)");
		validate_NULL_TYPETYPE(  arg3, "TIFFReadTile - arg3 (y)");
		validate_NULL_TYPETYPE(  arg4, "TIFFReadTile - arg4 (z)");
		validate_NULL_TYPETYPE(  arg5, "TIFFReadTile - arg5 (s)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

