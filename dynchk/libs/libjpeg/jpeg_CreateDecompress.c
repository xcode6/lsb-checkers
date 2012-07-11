// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#include <stddef.h>
#undef jpeg_CreateDecompress
static void(*funcptr) (j_decompress_ptr , int , size_t ) = 0;

extern int __lsb_check_params;
void jpeg_CreateDecompress (j_decompress_ptr arg0 , int arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for jpeg_CreateDecompress()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_CreateDecompress");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_CreateDecompress. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_CreateDecompress() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_CreateDecompress - arg0");
		validate_NULL_TYPETYPE(  arg1, "jpeg_CreateDecompress - arg1");
		validate_NULL_TYPETYPE(  arg2, "jpeg_CreateDecompress - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
