// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_info_get_class
static snd_pcm_class_t(*funcptr) (const snd_pcm_info_t * ) = 0;

extern int __lsb_check_params;
snd_pcm_class_t snd_pcm_info_get_class (const snd_pcm_info_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	snd_pcm_class_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_info_get_class()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_info_get_class", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_info_get_class. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_info_get_class() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "snd_pcm_info_get_class - arg0 (obj)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_info_get_class - arg0 (obj)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
