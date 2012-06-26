// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <alsa/pcm.h>
#undef snd_pcm_writen
static snd_pcm_sframes_t(*funcptr) (snd_pcm_t * , void * * , snd_pcm_uframes_t ) = 0;

extern int __lsb_check_params;
snd_pcm_sframes_t snd_pcm_writen (snd_pcm_t * arg0 , void * * arg1 , snd_pcm_uframes_t arg2 )
{
	int reset_flag = __lsb_check_params;
	snd_pcm_sframes_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for snd_pcm_writen()");
	if(!funcptr)
		#if 1
			funcptr = dlvsym(RTLD_NEXT, "snd_pcm_writen", "ALSA_0.9");
		#endif
	if(!funcptr) {
		__lsb_output(-1, "Failed to load snd_pcm_writen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "snd_pcm_writen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "snd_pcm_writen - arg0 (pcm)");
		}
		validate_NULL_TYPETYPE(  arg0, "snd_pcm_writen - arg0 (pcm)");
		if( arg1 ) {
		validate_RWaddress( arg1, "snd_pcm_writen - arg1 (bufs)");
		}
		validate_NULL_TYPETYPE(  arg1, "snd_pcm_writen - arg1 (bufs)");
		validate_NULL_TYPETYPE(  arg2, "snd_pcm_writen - arg2 (size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

