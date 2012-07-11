// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcDirSave
static FcBool(*funcptr) (FcFontSet * , FcStrSet * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcBool FcDirSave (FcFontSet * arg0 , FcStrSet * arg1 , const FcChar8 * arg2 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcDirSave()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcDirSave");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcDirSave. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcDirSave() - validating");
		validate_RWaddress( arg0, "FcDirSave - arg0 (set)");
		validate_NULL_TYPETYPE(  arg0, "FcDirSave - arg0 (set)");
		validate_RWaddress( arg1, "FcDirSave - arg1 (dirs)");
		validate_NULL_TYPETYPE(  arg1, "FcDirSave - arg1 (dirs)");
		validate_Rdaddress( arg2, "FcDirSave - arg2 (dir)");
		validate_NULL_TYPETYPE(  arg2, "FcDirSave - arg2 (dir)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
