// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#undef jpeg_write_coefficients
static void(*funcptr) (j_compress_ptr , jvirt_barray_ptr * ) = 0;

extern int __lsb_check_params;
void jpeg_write_coefficients (j_compress_ptr arg0 , jvirt_barray_ptr * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for jpeg_write_coefficients()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_write_coefficients");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_write_coefficients. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_write_coefficients() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_write_coefficients - arg0");
		validate_RWaddress( arg1, "jpeg_write_coefficients - arg1");
		validate_NULL_TYPETYPE(  arg1, "jpeg_write_coefficients - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

