// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftstroke.h>
#include <freetype/ftimage.h>
#undef FT_Stroker_ConicTo
static FT_Error(*funcptr) (FT_Stroker , FT_Vector * , FT_Vector * ) = 0;

extern int __lsb_check_params;
FT_Error FT_Stroker_ConicTo (FT_Stroker arg0 , FT_Vector * arg1 , FT_Vector * arg2 )
{
	int reset_flag = __lsb_check_params;
	FT_Error ret_value  ;
	__lsb_output(4, "Invoking wrapper for FT_Stroker_ConicTo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Stroker_ConicTo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Stroker_ConicTo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Stroker_ConicTo() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Stroker_ConicTo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FT_Stroker_ConicTo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Stroker_ConicTo - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Stroker_ConicTo - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Stroker_ConicTo - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

