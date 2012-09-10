// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <jpeglib.h>
#undef jpeg_add_quant_table
static void(*funcptr) (j_compress_ptr , int , const unsigned int * , int , boolean ) = 0;

extern int __lsb_check_params;
void jpeg_add_quant_table (j_compress_ptr arg0 , int arg1 , const unsigned int * arg2 , int arg3 , boolean arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for jpeg_add_quant_table()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "jpeg_add_quant_table");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load jpeg_add_quant_table. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jpeg_add_quant_table() - validating");
		validate_NULL_TYPETYPE(  arg0, "jpeg_add_quant_table - arg0");
		validate_NULL_TYPETYPE(  arg1, "jpeg_add_quant_table - arg1");
		if( arg2 ) {
		validate_Rdaddress( arg2, "jpeg_add_quant_table - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "jpeg_add_quant_table - arg2");
		validate_NULL_TYPETYPE(  arg3, "jpeg_add_quant_table - arg3");
		validate_NULL_TYPETYPE(  arg4, "jpeg_add_quant_table - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}

