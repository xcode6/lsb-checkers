// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftimage.h>
#include <freetype/ftoutln.h>
#undef FT_Outline_Decompose
static FT_Error(*funcptr) (FT_Outline * , const FT_Outline_Funcs * , void * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Outline_Decompose (FT_Outline * arg0 , const FT_Outline_Funcs * arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Outline_Decompose()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Outline_Decompose");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Outline_Decompose. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Outline_Decompose() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FT_Outline_Decompose - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FT_Outline_Decompose - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "FT_Outline_Decompose - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Outline_Decompose - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Outline_Decompose - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Outline_Decompose - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
