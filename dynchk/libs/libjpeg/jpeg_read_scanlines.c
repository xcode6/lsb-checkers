// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#undef jpeg_read_scanlines
static JDIMENSION(*funcptr) (j_decompress_ptr , JSAMPARRAY , JDIMENSION ) = 0;

extern int __lsb_check_params;
JDIMENSION jpeg_read_scanlines (j_decompress_ptr arg0 , JSAMPARRAY arg1 , JDIMENSION arg2 )
{
	int reset_flag = __lsb_check_params;
	JDIMENSION ret_value  ;
	__lsb_output(4, "Invoking wrapper for jpeg_read_scanlines()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_read_scanlines");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_read_scanlines. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_read_scanlines() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_read_scanlines - arg0");
		validate_NULL_TYPETYPE(  arg1, "jpeg_read_scanlines - arg1");
		validate_NULL_TYPETYPE(  arg2, "jpeg_read_scanlines - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

