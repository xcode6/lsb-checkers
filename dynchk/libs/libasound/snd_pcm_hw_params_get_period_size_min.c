// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_hw_params_get_period_size_min
static int(*funcptr) (const snd_pcm_hw_params_t * , snd_pcm_uframes_t * , int * ) = 0;

extern int __lsb_check_params;
int snd_pcm_hw_params_get_period_size_min (const snd_pcm_hw_params_t * arg0 , snd_pcm_uframes_t * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_hw_params_get_period_size_min()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_hw_params_get_period_size_min", "ALSA_0.9.0rc4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_hw_params_get_period_size_min. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_hw_params_get_period_size_min() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_pcm_hw_params_get_period_size_min - arg0 (params)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_hw_params_get_period_size_min - arg0 (params)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_hw_params_get_period_size_min - arg1 (frames)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_hw_params_get_period_size_min - arg1 (frames)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_pcm_hw_params_get_period_size_min - arg2 (dir)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_hw_params_get_period_size_min - arg2 (dir)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

