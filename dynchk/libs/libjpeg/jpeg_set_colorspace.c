// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#undef jpeg_set_colorspace
static void(*funcptr) (j_compress_ptr , J_COLOR_SPACE ) = 0;

extern int __lsb_check_params;
void jpeg_set_colorspace (j_compress_ptr arg0 , J_COLOR_SPACE arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for jpeg_set_colorspace()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_set_colorspace");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_set_colorspace. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_set_colorspace() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_set_colorspace - arg0");
		validate_NULL_TYPETYPE(  arg1, "jpeg_set_colorspace - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

