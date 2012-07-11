// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/ftimage.h>
#include <freetype/ftpfr.h>
#include <freetype/fttrigon.h>
#undef FT_Vector_Polarize
static void(*funcptr) (FT_Vector * , FT_Fixed * , FT_Angle * ) = 0;

extern int __lsb_check_params;
void FT_Vector_Polarize (FT_Vector * arg0 , FT_Fixed * arg1 , FT_Angle * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Vector_Polarize()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Vector_Polarize");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Vector_Polarize. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Vector_Polarize() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "FT_Vector_Polarize - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "FT_Vector_Polarize - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FT_Vector_Polarize - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Vector_Polarize - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Vector_Polarize - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Vector_Polarize - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
