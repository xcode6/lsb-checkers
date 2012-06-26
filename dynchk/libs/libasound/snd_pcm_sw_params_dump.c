// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#include <alsa/output.h>
#undef snd_pcm_sw_params_dump
static int(*funcptr) (snd_pcm_sw_params_t * , snd_output_t * ) = 0;

extern int __lsb_check_params;
int snd_pcm_sw_params_dump (snd_pcm_sw_params_t * arg0 , snd_output_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_sw_params_dump()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_sw_params_dump", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_sw_params_dump. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_sw_params_dump() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_sw_params_dump - arg0 (params)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_sw_params_dump - arg0 (params)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_sw_params_dump - arg1 (out)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_sw_params_dump - arg1 (out)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

