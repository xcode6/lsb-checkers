// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcConfigAppFontAddFile
static FcBool(*funcptr) (FcConfig * , const FcChar8 * ) = 0;

extern int __lsb_check_params;
FcBool FcConfigAppFontAddFile (FcConfig * arg0 , const FcChar8 * arg1 )
{
	int reset_flag = __lsb_check_params;
	FcBool ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcConfigAppFontAddFile()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcConfigAppFontAddFile");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcConfigAppFontAddFile. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcConfigAppFontAddFile() - validating");
		validate_RWaddress( arg0, "FcConfigAppFontAddFile - arg0 (config)");
		validate_NULL_TYPETYPE(  arg0, "FcConfigAppFontAddFile - arg0 (config)");
		validate_Rdaddress( arg1, "FcConfigAppFontAddFile - arg1 (file)");
		validate_NULL_TYPETYPE(  arg1, "FcConfigAppFontAddFile - arg1 (file)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

