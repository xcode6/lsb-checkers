// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/error.h>
#undef snd_lib_error_set_handler
static int(*funcptr) (snd_lib_error_handler_t ) = 0;

extern int __lsb_check_params;
int snd_lib_error_set_handler (snd_lib_error_handler_t arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_lib_error_set_handler()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_lib_error_set_handler", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_lib_error_set_handler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_lib_error_set_handler() - validating");
		validate_NULL_TYPETYPE(  arg0, "snd_lib_error_set_handler - arg0 (handler)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

