// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/conf.h>
#undef snd_config_search
static int(*funcptr) (snd_config_t * , const char * , snd_config_t * * ) = 0;

extern int __lsb_check_params;
int snd_config_search (snd_config_t * arg0 , const char * arg1 , snd_config_t * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_config_search()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_config_search", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_config_search. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_config_search() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_config_search - arg0 (config)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_config_search - arg0 (config)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "snd_config_search - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_config_search - arg1 (key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_config_search - arg2 (result)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_config_search - arg2 (result)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}
