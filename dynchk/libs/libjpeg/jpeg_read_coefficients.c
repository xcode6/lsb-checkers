// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#undef jpeg_read_coefficients
static jvirt_barray_ptr *(*funcptr) (j_decompress_ptr ) = 0;

extern int __lsb_check_params;
jvirt_barray_ptr * jpeg_read_coefficients (j_decompress_ptr arg0 )
{
	int reset_flag = __lsb_check_params;
	jvirt_barray_ptr * ret_value  ;
	__lsb_output(4, "Invoking wrapper for jpeg_read_coefficients()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_read_coefficients");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_read_coefficients. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_read_coefficients() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_read_coefficients - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
