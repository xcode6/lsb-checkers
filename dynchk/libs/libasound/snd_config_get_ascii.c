// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/conf.h>
#undef snd_config_get_ascii
static int(*funcptr) (const snd_config_t * , char * * ) = 0;

extern int __lsb_check_params;
int snd_config_get_ascii (const snd_config_t * arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_config_get_ascii()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_config_get_ascii", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_config_get_ascii. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_config_get_ascii() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_config_get_ascii - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_config_get_ascii - arg0 (config)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_config_get_ascii - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_config_get_ascii - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

