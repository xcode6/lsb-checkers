// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/mixer.h>
#undef snd_mixer_selem_set_capture_volume
static int(*funcptr) (snd_mixer_elem_t * , snd_mixer_selem_channel_id_t , long int ) = 0;

extern int __lsb_check_params;
int snd_mixer_selem_set_capture_volume (snd_mixer_elem_t * arg0 , snd_mixer_selem_channel_id_t arg1 , long int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_mixer_selem_set_capture_volume()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_mixer_selem_set_capture_volume", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_mixer_selem_set_capture_volume. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_mixer_selem_set_capture_volume() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_mixer_selem_set_capture_volume - arg0 (elem)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_mixer_selem_set_capture_volume - arg0 (elem)");
		validate_NULL_TYPETYPE(  arg1, "snd_mixer_selem_set_capture_volume - arg1 (channel)");
		validate_NULL_TYPETYPE(  arg2, "snd_mixer_selem_set_capture_volume - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

