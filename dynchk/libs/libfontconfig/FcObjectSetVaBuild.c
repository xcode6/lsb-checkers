// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <stdarg.h>
#include <fontconfig/fontconfig.h>
#undef FcObjectSetVaBuild
static FcObjectSet *(*funcptr) (const char * , va_list ) = 0;

extern int __lsb_check_params;
FcObjectSet * FcObjectSetVaBuild (const char * arg0 , va_list arg1 )
{
	int reset_flag = __lsb_check_params;
	FcObjectSet * ret_value  ;
	__lsb_output(4, "Invoking wrapper for FcObjectSetVaBuild()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "FcObjectSetVaBuild");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load FcObjectSetVaBuild. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "FcObjectSetVaBuild() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "FcObjectSetVaBuild - arg0 (first)");
		}
		validate_NULL_TYPETYPE(  arg0, "FcObjectSetVaBuild - arg0 (first)");
		validate_NULL_TYPETYPE(  arg1, "FcObjectSetVaBuild - arg1 (va)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

