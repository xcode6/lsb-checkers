// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_hw_params_set_buffer_time_near
static int(*funcptr) (snd_pcm_t * , snd_pcm_hw_params_t * , unsigned int * , int * ) = 0;

extern int __lsb_check_params;
int snd_pcm_hw_params_set_buffer_time_near (snd_pcm_t * arg0 , snd_pcm_hw_params_t * arg1 , unsigned int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_hw_params_set_buffer_time_near()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_hw_params_set_buffer_time_near", "ALSA_0.9.0rc4");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_hw_params_set_buffer_time_near. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_hw_params_set_buffer_time_near() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_hw_params_set_buffer_time_near - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_hw_params_set_buffer_time_near - arg0 (pcm)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_hw_params_set_buffer_time_near - arg1 (params)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_hw_params_set_buffer_time_near - arg1 (params)");
		if( arg2 ) {
		validate_RWaddress( arg2, "snd_pcm_hw_params_set_buffer_time_near - arg2 (val)");
		}
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_hw_params_set_buffer_time_near - arg2 (val)");
		if( arg3 ) {
		validate_RWaddress( arg3, "snd_pcm_hw_params_set_buffer_time_near - arg3 (dir)");
		}
		validate_NULL_TYPETYPE(  arg3, "snd_pcm_hw_params_set_buffer_time_near - arg3 (dir)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

