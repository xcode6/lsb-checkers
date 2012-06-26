// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#undef FT_Library_Version
static void(*funcptr) (FT_Library , FT_Int * , FT_Int * , FT_Int * ) = 0;

extern int __lsb_check_params;
void FT_Library_Version (FT_Library arg0 , FT_Int * arg1 , FT_Int * arg2 , FT_Int * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for FT_Library_Version()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FT_Library_Version");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FT_Library_Version. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FT_Library_Version() - validating");
		validate_NULL_TYPETYPE(  arg0, "FT_Library_Version - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FT_Library_Version - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FT_Library_Version - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FT_Library_Version - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FT_Library_Version - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "FT_Library_Version - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "FT_Library_Version - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

