// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <tiff.h>
#include <tiffio.h>
#undef TIFFReverseBits
static void(*funcptr) (uint8 * , tmsize_t ) = 0;

extern int __lsb_check_params;
void TIFFReverseBits (uint8 * arg0 , tmsize_t arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for TIFFReverseBits()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "TIFFReverseBits");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load TIFFReverseBits. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "TIFFReverseBits() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "TIFFReverseBits - arg0 (cp)");
		}
		validate_NULL_TYPETYPE(  arg0, "TIFFReverseBits - arg0 (cp)");
		validate_NULL_TYPETYPE(  arg1, "TIFFReverseBits - arg1 (n)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
