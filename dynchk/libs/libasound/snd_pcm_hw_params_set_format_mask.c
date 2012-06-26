// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_hw_params_set_format_mask
static int(*funcptr) (snd_pcm_t * , snd_pcm_hw_params_t * , snd_pcm_format_mask_t * ) = 0;

extern int __lsb_check_params;
int snd_pcm_hw_params_set_format_mask (snd_pcm_t * arg0 , snd_pcm_hw_params_t * arg1 , snd_pcm_format_mask_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_hw_params_set_format_mask()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_hw_params_set_format_mask", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_hw_params_set_format_mask. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_hw_params_set_format_mask() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_hw_params_set_format_mask - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_hw_params_set_format_mask - arg0 (pcm)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_hw_params_set_format_mask - arg1 (params)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_hw_params_set_format_mask - arg1 (params)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_pcm_hw_params_set_format_mask - arg2 (mask)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_hw_params_set_format_mask - arg2 (mask)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

