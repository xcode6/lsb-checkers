// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/conf.h>
#undef snd_config_make_integer64
static int(*funcptr) (snd_config_t * * , const char * ) = 0;

extern int __lsb_check_params;
int snd_config_make_integer64 (snd_config_t * * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_config_make_integer64()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_config_make_integer64", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_config_make_integer64. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_config_make_integer64() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_config_make_integer64 - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_config_make_integer64 - arg0 (config)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_config_make_integer64 - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_config_make_integer64 - arg1 (key)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
