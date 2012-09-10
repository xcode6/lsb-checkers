// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <fontconfig/fontconfig.h>
#undef FcLangSetHash
static FcChar32(*funcptr) (const FcLangSet * ) = 0;

extern int __lsb_check_params;
FcChar32 FcLangSetHash (const FcLangSet * arg0 )
{
	int reset_flag = __lsb_check_params;
	FcChar32 ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcLangSetHash()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcLangSetHash");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcLangSetHash. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcLangSetHash() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcLangSetHash - arg0 (ls)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcLangSetHash - arg0 (ls)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

