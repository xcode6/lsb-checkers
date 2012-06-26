// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_name
static const char *(*funcptr) (snd_pcm_t * ) = 0;

extern int __lsb_check_params;
const char * snd_pcm_name (snd_pcm_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_name()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_name", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_name - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_name - arg0 (pcm)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

