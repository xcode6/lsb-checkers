// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <sane/sane.h>
#undef sane_get_option_descriptor
static const SANE_Option_Descriptor *(*funcptr) (SANE_Handle , SANE_Int ) = 0;

extern int __lsb_check_params;
const SANE_Option_Descriptor * sane_get_option_descriptor (SANE_Handle arg0 , SANE_Int arg1 )
{
	int reset_flag = __lsb_check_params;
	const SANE_Option_Descriptor * ret_value  ;
	__lsb_output(4, "Invoking wrapper for sane_get_option_descriptor()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sane_get_option_descriptor");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load sane_get_option_descriptor. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sane_get_option_descriptor() - validating");
		validate_NULL_TYPETYPE(  arg0, "sane_get_option_descriptor - arg0 (handle)");
		validate_NULL_TYPETYPE(  arg1, "sane_get_option_descriptor - arg1 (option)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
