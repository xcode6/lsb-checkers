// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiffio.h>
#undef TIFFGetCloseProc
static TIFFCloseProc(*funcptr) (TIFF * ) = 0;

extern int __lsb_check_params;
TIFFCloseProc TIFFGetCloseProc (TIFF * arg0 )
{
	int reset_flag = __lsb_check_params;
	TIFFCloseProc ret_value  ;
	__lsb_output(4, "Invoking wrapper for TIFFGetCloseProc()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFGetCloseProc");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFGetCloseProc. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFGetCloseProc() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFGetCloseProc - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFGetCloseProc - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

