// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <freetype/freetype.h>
#include <fontconfig/fontconfig.h>
#include <fontconfig/fcfreetype.h>
#undef FcFreeTypeCharSetAndSpacing
static FcCharSet *(*funcptr) (FT_Face , FcBlanks * , int * ) = 0;

extern int __lsb_check_params;
FcCharSet * FcFreeTypeCharSetAndSpacing (FT_Face arg0 , FcBlanks * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcCharSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcFreeTypeCharSetAndSpacing()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcFreeTypeCharSetAndSpacing");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcFreeTypeCharSetAndSpacing. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcFreeTypeCharSetAndSpacing() - validating");
		validate_NULL_TYPETYPE(  arg0, "FcFreeTypeCharSetAndSpacing - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "FcFreeTypeCharSetAndSpacing - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "FcFreeTypeCharSetAndSpacing - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "FcFreeTypeCharSetAndSpacing - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "FcFreeTypeCharSetAndSpacing - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

